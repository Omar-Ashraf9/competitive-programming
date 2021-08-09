#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s;
    string f = "0000000";
    string l = "1111111";

    cin >> s;
    int o = s.find(f);
    int m = s.find(l);

    if((o != string::npos) || (m != string::npos))
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }


    return 0;
}
