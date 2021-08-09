#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    string temp = "hello";
    int c = 0;
    int index = 0;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == temp[index])
        {
            index++;
            c++;
        }
    }
    if(c == 5)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }

    return 0;
}
