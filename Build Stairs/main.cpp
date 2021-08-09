#include <iostream>

using namespace std;
const int N = 1e5 + 4;
int arr[N];
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    /// try to decrease the hight from right to left when element[i-1] > element[i].
    for(int i = n - 1; i > 0; i--)
    {
        if(arr[i - 1] > arr[i])
        {
            arr[i-1] -= 1;
        }
    }
    /// test the work by going from left to right if at any point of time the element[i-1] > element[i] cout NO.
    bool acheive = true;
    for(int i = 1; i < n; i++)
    {
        if(arr[i-1] > arr[i])
        {
            cout << "No" << endl;
            acheive = false;
        }
    }
    if(acheive)
    {
        cout << "Yes" << endl;
    }
    return 0;
}
