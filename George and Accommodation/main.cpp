#include <iostream>

using namespace std;

int main()
{
    int n , p , q;
    int Count = 0;
    cin >> n;
    while(n)
    {
        cin >> p >> q;
        if(q - p >= 2)
        {
            Count++;
        }
        n--;
    }
    cout << Count << endl;
    return 0;
}
