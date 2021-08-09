#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n;
    string s;
    cin >> n;
    cin >> s;
    bool ok = false;
    for(ll i = 1; i < s.size(); i++)
    {
        if(s[i] < s[i - 1])
        {
            cout << "YES" << endl;
            cout << i << " " << i+1 << endl;
            ok = true;
            break;
        }
    }
    if(!ok)
    {
        cout << "NO" << endl;
    }
    return 0;
}
