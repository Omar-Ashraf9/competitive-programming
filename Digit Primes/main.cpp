#include <iostream>
#include <bits/stdc++.h>

using namespace std;
const int N = 1000000;
bool prime[N + 1];
void Fill()
{
    memset(prime,1,sizeof(prime));
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= N; i++)
    {
        if(prime[i])
        {
            for(int j = i+i; j <= N; j+=i)
            {
                prime[j] = 0;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int sum = 0;

    while(n != 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}
