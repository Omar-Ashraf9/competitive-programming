#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int Case = 1;
    int n , m , x;
    while(cin >> n)
    {
        if(!n)
            break;
        vector <int> input;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            input.push_back(x);
        }
        cin >> m;
        vector <int> query;
        for(int i = 0; i < m; i++)
        {
            cin >> x;
            query.push_back(x);
        }
        vector <int> sums;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                x = input[i] + input[j];
                sums.push_back(x);
            }
        }
        cout << "Case " << Case++ << ":" << endl;
        for(int i = 0; i < m; i++)
        {
            int mini = 1000000000;
            int close;
            for(int j = 0; j < sums.size(); j++)
            {
                if(abs(sums[j] - query[i]) < mini)
                {
                    mini = abs(sums[j] - query[i]);
                    close = sums[j];
                }
            }

        cout << "Closest sum to " << query[i] << " is " << close << "." << endl;
        }
    }

    return 0;
}
