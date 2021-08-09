#include <iostream>
#include <vector>
using namespace std;
vector <int> trackLen;
vector <int> taken;
vector <int> solution;
int N , numOfTracks , x , ans;
void go(int pos , int sum)
{
    ///Base case.
    if(pos == numOfTracks)
    {
        if(sum > ans)
        {
            ans = sum;
            solution = taken;
        }
        return;
    }


    ///Recursive case.

    //option1: don't take this track.
    go(pos+1 , sum);

    //option2: take this track.
    if(sum + trackLen[pos] <= N)
    {
        taken.push_back(trackLen[pos]);   // Do.
        go(pos+1 , sum + trackLen[pos]);//  Recurse.
        taken.pop_back();               //  Undo.
    }

}
int main()
{
    while(cin >> N)
    {
        cin >> numOfTracks;

        trackLen.clear();
        taken.clear();
        solution.clear();
        ans = 0;

        for(int i = 0; i < numOfTracks; i++)
        {
            cin >> x;
            trackLen.push_back(x);
        }

        go(0 , 0);
        for(int i = 0; i < solution.size(); i++)
        {
            cout << solution[i] << " ";
        }
        cout << "sum:" << ans << endl;

    }
    return 0;
}
