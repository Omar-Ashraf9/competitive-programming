#include <iostream>

using namespace std;

int main()
{
    int n , wrongPresses = 0;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        wrongPresses += (n - i) * i;
    }

    cout << wrongPresses + n << endl;
    return 0;
}
