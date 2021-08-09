#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
     /// first type of typo.
    char c = s[0];
    int cnt = 1;
    for(int i = 1; i < s.size(); i++)
    {
        if(c == s[i])
        {
            cnt++;
            if(cnt > 2)
            {
                s[i] = '*';
            }
        }else
        {
            cnt = 1 , c = s[i];
        }
    }
    s.erase(remove(s.begin(), s.end(), '*'), s.end());

    /// second type of typo.
    for(int i = 0; i < s.size() - 1; i++)
    {
        if(s[i] == s[i+1] && s[i+2] == s[i+3])
        {
            s[i+3] = '*';
        }
    }
    s.erase(remove(s.begin(), s.end(), '*'), s.end());

    cout << s << endl;
    return 0;
}
