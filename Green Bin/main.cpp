#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n;
    long long ans = 0;
    string s;
    map <string,int> m;
    cin >> n;


    for(int i = 0; i < n; i++)
    {
        cin >> s;
        sort(s.begin(), s.end());
        if(m.find(s) != m.end())
        {
            ans += m[s];
            m[s]++;
        }else
        {
            m.insert({s,1});
        }
    }


    cout << ans << endl;
    return 0;
}
