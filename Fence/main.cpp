#include <iostream>

using namespace std;
const int N = 1.5 * 1e5 + 10;
int arr[N] , cumulative[N];

int sumBetween(int L , int R)
{
    if(L == 0)
    {
        return cumulative[R];
    }else
    {
        return cumulative[R] - cumulative[L - 1];
    }
}

int main()
{
    int n , k , minValue , minIndex;
    cin >> n >> k;
    /// Take the width of the blocks.
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    /// Create the cumulative sum
    for(int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            cumulative[i] = arr[i];
        }else
        {
            cumulative[i] = cumulative[i - 1] + arr[i];
        }
    }

    minIndex = 0;
    minValue = sumBetween(0,k - 1);
    for(int i = 1; i < n; i++)
    {
        if(i + k - 1 >= n)
        {
            break;
        }else
        {
            int check = sumBetween(i,i + k - 1);
            if(check < minValue)
            {
                minValue = check;
                minIndex = i;
            }
        }
    }
    cout << minIndex + 1 << endl;
    return 0;
}
