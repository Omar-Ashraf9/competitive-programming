#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n , m , x;
    while(cin >> n >> m)
    {
        if(n == 0 && m == 0)
            break;

        map <int , int> sell;
        int answer = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            sell[x]++;
        }
        for(int i = 0; i < m; i++)
        {
            cin >> x;
            sell[x]++;
        }
        map <int , int> :: iterator it;
        for(it = sell.begin(); it != sell.end(); it++)
        {
            if(it -> second > 1)
            {
                answer++;
            }
        }
        cout << answer << endl;
    }

    return 0;
}
