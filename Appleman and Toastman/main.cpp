#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <numeric>
#define ll long long
using namespace std;

int main()
{
    ll n , score , sum = 0;
    int x;
    deque <int> deq;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
        deq.push_back(x);
    }
    sort(deq.begin(), deq.end());
    score = sum;
    for(int i = 0; i < n; i++)
    {
        score += deq[i];
        sum -= deq[i];
        score += sum;
    }
    cout << score  - deq[deq.size() - 1]<< endl;

    return 0;
}
