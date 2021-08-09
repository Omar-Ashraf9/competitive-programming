#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n , x;
    while(cin >> n)
    {
        if(!n)
            break;
        map < vector<int> , int > mo;
        int answer = 0;
        int maxmum = 0;
        for(int i = 0; i < n; i++)
        {
            vector <int> vec;
            for(int j = 0; j < 5; j++)
            {
                cin >> x;
                vec.push_back(x);
            }
            sort(vec.begin(),vec.end());
            mo[vec]++;
        }
        map < vector<int> , int > :: iterator it;
        for(it = mo.begin(); it != mo.end(); it++)
        {
            if(it->second > maxmum)
            {
                maxmum = it->second;
            }
        }
        for(it = mo.begin(); it != mo.end(); it++)
        {
            if(it->second == maxmum)
            {
                answer = answer + maxmum;
            }
        }
        cout << answer << endl;
    }


    return 0;
}
