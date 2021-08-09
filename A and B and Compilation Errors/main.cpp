#include <iostream>

using namespace std;

int main()
{
    int n , a;
    cin >> n;

    int errorsAtFirst = 0;
    int errorsAtSecond = 0;
    int errorsAtThird = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        errorsAtFirst += a;
    }

    for(int i = 0; i < n - 1; i++)
    {
        cin >> a;
        errorsAtSecond += a;
    }

    for(int i = 0; i < n - 2; i++)
    {
        cin >> a;
        errorsAtThird += a;
    }

    cout << errorsAtFirst - errorsAtSecond << endl;
    cout << errorsAtSecond - errorsAtThird << endl;
    return 0;
}
