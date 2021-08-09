#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n , vesyaMoves , petyaMoves;
    string s , ans = "";
    cin >> n;
    cin >> s;
    vesyaMoves = petyaMoves = ((n - 11)/2);
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '8')
        {
            if(petyaMoves > 0)
            {
                petyaMoves--;
            }else
            {
                ans += s[i];
            }
        }
        else
        {
            if(vesyaMoves > 0)
            {
                vesyaMoves--;
            }else
            {
                ans += s[i];
            }
        }
    }
    if(ans[0] == '8')
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }

    return 0;
}
