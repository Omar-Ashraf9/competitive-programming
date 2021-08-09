#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n , x;
    while(cin >> n , n)
    {
        vector <int> vec;
        bool acheive = true;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());
        for(int i = 0; i < n - 1; i++)
        {
            if(abs(vec[i] - vec[i+1]) > 200)
            {
                acheive = false;
                break;
            }
        }

        if(acheive)
        {
            if((1422 - vec[n-1]) * 2 <= 200)
            {
                cout << "POSSIBLE" << endl;
            }else
            {
                cout << "IMPOSSIBLE" << endl;
            }
        }else
        {
            cout << "IMPOSSIBLE" << endl;
        }
    }
    return 0;
}
