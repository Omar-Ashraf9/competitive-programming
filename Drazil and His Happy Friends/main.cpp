#include <iostream>

using namespace std;
const int MAX = 120;
bool boysState[MAX];
bool girlssState[MAX];
int main()
{
    int n , m , b , g , x ,y , selectedB , selectedG;
    bool ok = true;
    cin >> n >> m;
    cin >> b;
    for(int i = 0; i < b; i++)
    {
        cin >> x;
        boysState[x] = true;
    }
    cin >> g;
    for(int i = 0; i < g; i++)
    {
        cin >> y;
        girlssState[y] = true;
    }
    for(int i = 0; i < n*n+m*m; i++)
    {
        selectedB = i % n;
        selectedG = i % m;
        if(boysState[selectedB] == true && girlssState[selectedG] == false)
        {
            girlssState[selectedG] = true;
        }

        else if(boysState[selectedB] == false && girlssState[selectedG] == true)
        {
            boysState[selectedB] = true;
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(boysState[i] == false)
        {
            ok = false;
        }
    }
    for(int i = 0; i < m; i++)
    {
        if(girlssState[i] == false)
        {
            ok = false;
        }
    }

    if(ok)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }
    return 0;
}
