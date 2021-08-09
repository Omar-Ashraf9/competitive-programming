#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , a;
    vector <int> vec;
    set <int> s;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        vec.push_back(a);
        s.insert(a);
    }
    if(s.size() == n)
    {
        cout << "uniqe" << endl;
    }else
    {
        cout << "No" << endl;
    }

    return 0;
}
