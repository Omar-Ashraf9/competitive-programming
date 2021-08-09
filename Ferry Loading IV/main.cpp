#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main()
{
    int c, l, m , carLen;
    string carPos;
    cin >> c;
    while(c--)
    {
        deque <int> left;
        deque <int> right;
        bool ferryPos = 1; // indicate that the ferry on the left.
        int cnt = 0;
        cin >> l >> m;
        l *= 100;
        for(int i = 0; i < m; i++)
        {
            cin >> carLen >> carPos;
            if(carPos == "right")
            {
                right.push_back(carLen);
            }else
            {
                left.push_back(carLen);
            }
        }
        while(!right.empty() || !left.empty())
        {
            int load = 0;
            if(ferryPos)
            {
                while(!left.empty() && left.front() + load <= l)
                {
                    load += left.front();
                    left.pop_front();
                }
            }else
            {
                while(!right.empty() && right.front() + load <= l)
                {
                    load += right.front();
                    right.pop_front();
                }
            }
            cnt++;
            if(ferryPos)
            {
                ferryPos = false;
            }
            else
            {
                ferryPos = true;
            }
        }
        cout << cnt << endl;

    }
    return 0;
}
