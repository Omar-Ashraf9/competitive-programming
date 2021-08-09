#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    bool flag;
    string s;
    cin >> s;
    for(int i = 1; i < s.length(); i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
        {
            flag = true;
        }else
        {
            flag = false;
            break;
        }
    }
    if((s[0] >= 65 && s[0] <= 90) && flag)
    {
        for(int i = 0; i < s.length(); i++)
        {
            s[i] = s[i] + 32;
        }
        cout << s << endl;
    }
    else if((s[0] >= 97 && s[0] <= 122) && flag)
    {
        s[0] = s[0] - 32;
        for(int i = 1; i < s.length(); i++)
        {
            s[i] = s[i] + 32;
        }

        cout << s << endl;
    }else
    {
        cout << s << endl;
    }

    return 0;
}
