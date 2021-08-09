#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool mySort(const string &a, const string &b)
{
    return (a+b > b+a);
}

int main()
{
    int n;
    string x;

    while(cin >> n , n)
    {
        vector <string> vec;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end(),mySort);
        for(int i = 0; i < n; i++)
        {
            cout << vec[i];
        }
        cout << endl;
    }
    return 0;
}
