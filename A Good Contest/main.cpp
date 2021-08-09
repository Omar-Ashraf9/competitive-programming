#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int n , before , after;
    bool flag = false;
    string s;
    cin >> n;
    vector <bool> vec(n,false);

    for(int i = 0; i < n; i++)
    {
        cin >> s >> before >> after;
        if(before >= 2400 && after - before > 0)
        {
            vec[i] = true;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(vec[i] == true)
        {
            flag = true;
            break;
        }
    }
    if(flag)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }


    return 0;
}
