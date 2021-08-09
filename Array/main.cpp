#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n , x;
    cin >> n;
    vector <int> ori;
    vector <int> s1;
    vector <int> s2;
    vector <int> s3;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        ori.push_back(x);
    }
    for(int i = 0; i < n; i++)
    {
        if((ori[i] < 0))
        {
            s1.push_back(ori[i]);
        }else if(ori[i] > 0)
        {
            s2.push_back(ori[i]);
        }else
        {
            s3.push_back(ori[i]);
        }
    }
    if(s2.size() == 0)
    {
        for(int i = 0; i < 2; i++)
        {
            s2.push_back(s1.back());
            s1.pop_back();
        }
    }
    if(s1.size() % 2 == 0)
    {
        for(int i = 0; i < 1; i++)
        {
            s3.push_back(s1.back());
            s1.pop_back();
        }
    }
    cout << s1.size() << " ";
    for(int c : s1)
    {
        cout << c << " ";
    }
    cout << endl;
    cout << s2.size() << " ";
    for(int c : s2)
    {
        cout << c << " ";
    }
    cout << endl;
    cout << s3.size() << " ";
    for(int c : s3)
    {
        cout << c << " ";
    }

    return 0;
}
