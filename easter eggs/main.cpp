#include <iostream>

using namespace std;

int main()
{
    int n;
    string clr = "RGBOYIV";
    cin >> n;
    cout << "RGB";
    n -= 3;
    int i = 3;
    while(n--)
    {
        cout << clr[i];
        i++;
        if(i > 6)
            i = 3;
    }

    return 0;
}
