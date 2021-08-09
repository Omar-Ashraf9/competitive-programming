#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int n , x , c;
    ll ans = 0;
    vector <ll> Chapters;
    cin >> n >> x;
    for(int i = 0; i < n; i++)
    {
        cin >> c;
        Chapters.push_back(c);
    }

    sort(Chapters.begin(), Chapters.end());
    for(int i = 0; i < n; i++)
    {
        ans += Chapters[i] * x;
        if(x > 1)
        {
            x--;
        }
    }
    cout << ans << endl;
    return 0;
}
