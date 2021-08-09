#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;
struct contestant
{
    int id;
    int totalSolved = 0;
    int totaltime = 0;
    bool solved[10];
    int penalties[10];

    contestant(int num)
    {
        id = num;
        memset(solved,0,sizeof solved);
        memset(penalties,0,sizeof penalties);
    }

};
bool mySort(const contestant &o1 , const contestant &o2)
{
    if(o1.totalSolved > o2.totalSolved)
        return true;
    if(o1.totalSolved == o2.totalSolved && o1.totaltime < o2.totaltime)
        return true;
    if(o1.totalSolved == o2.totalSolved && o1.totaltime == o2.totaltime && o1.id < o2.id)
        return true;
    return false;
}
void modify(contestant &c, const int &p , const int &T , const char &L)
{
    if(!c.solved[p])
    {
        if(L == 'C')
        {
            c.totalSolved++;
            c.solved[p] = true;
            c.totaltime += c.penalties[p] + T;
        }else if(L == 'I')
        {
            c.penalties[p] += 20;
        }
    }
}
int main()
{
    int t , id , p , T;
    char L;
    string s;
    cin >> t;
    getline(cin,s);
    getline(cin,s);
    while(t--)
    {
        vector <contestant> board;
        int participant[101];
        memset(participant,-1,sizeof participant);

        while(getline(cin,s) , s.size() > 0)
        {
            stringstream str(s);
            str >> id >> p >> T >> L;
            if(participant[id] == -1)
            {
                board.push_back(*new contestant(id));
                participant[id] = board.size() - 1;
            }
            modify(board[participant[id]],p,T,L);

        }
        sort(board.begin(), board.end() , mySort);

        for(int i = 0; i < board.size(); i++)
        {
            cout << board[i].id << " " << board[i].totalSolved << " " << board[i].totaltime << endl;
        }
        if(t > 0)
        {
            cout << endl;
        }

    }

    return 0;
}
