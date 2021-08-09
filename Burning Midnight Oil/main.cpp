#include <iostream>

using namespace std;

int main()
{
    long long n;
    int k;
    cin >> n >> k;
    int low = 1;
    int high = n;
    while(low < high) /// we don't put (=) to prevent stuck in the last iteration which cause an infinite loop.
    {
        int mid = (low + high) / 2;
        int v = mid;
        int sum = 0;
        while(v != 0)
        {
            sum += v;
            v = v / k;
        }
        if(sum > n)
        {
            high = mid;
        }else if(sum < n)
        {
            low = mid + 1;
        }else
        {
            low = mid;
            break;
        }
    }
    cout << low << endl;
    return 0;
}
