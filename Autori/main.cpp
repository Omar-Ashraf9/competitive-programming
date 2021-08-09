#include <iostream>

using namespace std;

int main()
{
    string s;
    string r = "";
    cin >> s;
    r = r + s[0];
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '-')
        {
            r = r + s[i+1];
        }
    }
    cout << r << endl;
    return 0;
}
