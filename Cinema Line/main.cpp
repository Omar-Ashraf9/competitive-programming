#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n , x;
    int n50 = 0 , n25 = 0;
    vector <int> vec;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        vec.push_back(x);
    }
    for(int i = 0; i < n; i++)
    {
        if(vec[i] == 25)
        {
            n25++;
        }else if(vec[i] == 50)
        {
            if(n25 > 0)
            {
                n25--;
                n50++;
            }else
            {
                cout << "NO" << endl;
                return 0;
            }
        }else if(vec[i] == 100)
        {
            if(n25 > 0 && n50 > 0)
            {
                n25-- , n50 --;
            }else if(n25 >= 3)
            {
                n25-=3;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}
