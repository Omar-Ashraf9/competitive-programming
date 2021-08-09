#include <bits/stdc++.h>

using namespace std;
int saleema[100000];
int cows, stalls;
bool isValid(int d)
{
    int prev = -1e9;
    int c = cows;
    for(int i = 0; i < stalls; i++)
    {
        if(saleema[i] - prev >= d)
        {
            if(!--c)
            {
                return true;
            }
            prev = saleema[i];
        }
    }
    return false;
}
int BS(int s, int e)  //To get last true.
{
    while(s < e)
    {
        //why +1: s = 5 , e = 5 → in both cases will reach to the stopping condition.
        int mid = s + (e - s + 1)/2;
        if(isValid(mid))
        {
            s = mid;
        }
        else
        {
            e = mid - 1;
        }
    }
    return s;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> stalls >> cows;
        for(int i = 0; i < stalls; i++)
        {
            cin >> saleema[i];
        }
        sort(saleema,saleema+stalls);
        cout << BS(0,1e9) << endl;
    }

    return 0;
}
