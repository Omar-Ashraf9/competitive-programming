#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    string temp = "";
    cin >> s;
    sort(s.begin(),s.end());
    int i = 0;
    while(i < s.length())
    {
        if(s[i] == s[i+1])
        {
            i++;
        }else
        {
            temp = temp + s[i];
            i++;
        }
    }
    if((temp.length() % 2) == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }else
    {
        cout << "IGNORE HIM!" << endl;
    }


    return 0;
}
