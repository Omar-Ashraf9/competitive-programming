#include <iostream>
#define ll long long
using namespace std;
const int N = 2e5 + 4;
int arr[N];
void build(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(i == 0)
        {
            arr[i] = 0;
        }else if(s[i] == s[i - 1])
        {
            arr[i] = arr[i - 1] + 1;
        }else
        {
            arr[i] = arr[i - 1];
        }
    }
}
ll sumBetween(ll L , ll R)
{
    if(L == 0)
    {
        return arr[R];
    }else
    {
        return arr[R] - arr[L];
    }
}
int main()
{
    int m;
    ll l , r;
    string s;
    cin >> s;
    cin >> m;
    build(s);
    while(m--)
    {
        cin >> l >> r;
        l-- , r--;
        cout << sumBetween(l,r) << endl;
    }
    return 0;
}
