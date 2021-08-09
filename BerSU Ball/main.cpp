#include <iostream>
#include <algorithm>
using namespace std;
const int N = 110;
const int M = 110;
int boys[N];
int girls[M];
int main()
{
    int n , m , cnt = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> boys[i];
    }

    cin >> m;

    for(int i = 0; i < m; i++)
    {
        cin >> girls[i];
    }

    sort(boys, boys+n);
    sort(girls, girls+m);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(abs(boys[i] - girls[j]) <= 1)
            {
                cnt++;
                girls[j] = INT_MAX;
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
