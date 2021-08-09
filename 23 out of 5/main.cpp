#include <bits/stdc++.h>
using namespace std;

vector <int> vec;
bool res;
bool taken[6];

void go(int cntElements, int accumulated, bool flagFirst)
{
    ///Base case.
    if(cntElements == 5 && accumulated == 23)
    {
        res = true;
        return;
    }

    ///Recursive case.
    for(int i = 0; i < 5; i++)
    {
        if(taken[i])
            continue;

        taken[i] = true;

        if(flagFirst)
        {
            go(cntElements + 1, vec[i], 0);
        }
        else
        {
            //option 1: + operation
            go(cntElements + 1, accumulated + vec[i] , 0);

            //option 2: - operation
            go(cntElements + 1, accumulated - vec[i] , 0);

            //option 3: * operation
            go(cntElements + 1, accumulated * vec[i] , 0);
        }

        taken[i] = false;

    }
}
int main()
{
    int x, sum;

    while(true)
    {
        memset(taken, 0, sizeof taken);
        sum = 0;
        res = false;
        vec.clear();

        for(int i = 0; i < 5; i++)
        {
            cin >> x;
            vec.push_back(x);
            sum += x;
        }

        if(!sum)
            break;

        go(0, 0, 1);
        if(res)
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
