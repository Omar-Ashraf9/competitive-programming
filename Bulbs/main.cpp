#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n , m , x , y;
    set <int> s;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        while(x)
        {
            cin >> y;
            s.insert(y);
            x--;
        }
    }
    if(s.size() == m)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }

    return 0;
}
