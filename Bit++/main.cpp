#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int x = 0;
    string s;
    int n;
    cin >> n;
    while(n)
    {
        cin >> s;
        if(s == "X++" || s == "++X")
        {
            x = x + 1;
        }
        if(s == "X--" || s == "--X")
        {
            x = x - 1;
        }
        n = n - 1;
    }
    cout << x << endl;


    return 0;
}
