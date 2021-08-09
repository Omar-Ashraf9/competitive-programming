#include <iostream>
#include <set>
#include <string>
#include <cstring>
using namespace std;


int main()
{
    string s;
    set<string> f;

    while(getline(cin,s))
    {
        string temp = "";
        for(int i = 0; i < s.length(); i++)
        {
            char ch = tolower(s[i]);
            if(ch >= 97 && ch <= 122)
            {
                cout << "i is: " << s << endl;
                temp = temp + ch;
            }else
            {
                cout << "in else" << endl;
                if(temp != "")
                {
                    f.insert(temp);
                    temp = "";
                }
            }
        }
        /// to add the last word in line to list because the next char will be (\n);
        if(temp != "")
        {
            cout << "MAA" << endl;
            f.insert(temp);
        }
    }

    for(auto it = f.begin(); it != f.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}
