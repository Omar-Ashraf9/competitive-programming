#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 4;
int prime[N];
int cond[N];
int cumu[N];
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
void build()
{
    for(int i = 0; i < N; i++)
    {
        if((i % 2 != 0) && (prime[i]) && (prime[(i + 1) / 2]))
        {
            cond[i] = 1;
        }else
        {
            cond[i] = 0;
        }
    }

    for(int i = 0; i < N; i++)
    {
        if(i == 0)
        {
            cumu[i] = cond[i];
        }else
        {
            cumu[i] = cumu[i - 1] + cond[i];
        }
    }

}
int main()
{
    Fill();
    build();
    int q , l , r;
    cin >> q;


    for(int i = 0; i < q; i++)
    {
        cin >> l >> r;
        cout << cumu[r] - cumu[l - 1] << endl;
    }
    return 0;
}
