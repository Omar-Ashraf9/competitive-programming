#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long n , x , fmx , smx , ans;
    vector <long long> vec;
    vector <long long> vec2;
    cin >> n;
    for(long long i = 0; i < n; i++)
    {
        cin >> x;
        vec.push_back(x);
        vec2.push_back(x);
    }
    sort(vec2.begin(), vec2.end());
    fmx = vec2[vec2.size() - 1];
    smx = vec2[vec2.size() - 2];
    for(long long i = 0; i < n; i++)
    {
        if(vec[i] != fmx)
        {
            ans = fmx;
        }else
        {
            ans = smx;
        }
        cout << ans << endl;
    }
    return 0;
}
