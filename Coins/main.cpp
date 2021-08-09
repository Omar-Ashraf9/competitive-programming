#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> vec;
void getDivisors(int n)
{
    for(int i = 1; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            vec.push_back(i);
            if(i != n / i)
            {
                vec.push_back(n/i);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    getDivisors(n);
    sort(vec.rbegin(),vec.rend());
    if(vec.size() == 1)
    {
        cout << vec[0];
    }
    else
    {
        cout << vec[0] << " ";
        int cur = vec[0];
        for(int i = 1; i < vec.size()- 1; i++)
        {
            if(cur % vec[i] == 0)
            {
                cout << vec[i] << " ";
                cur = vec[i];
            }
        }
        cout << 1;
    }

    return 0;
}
