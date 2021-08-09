#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool  mySort(const pair <int,int> &a , const pair <int,int> &b)
{
    return a.second < b.second;
}
int main()
{
    int n , x;
    vector < pair <int,int> > attend;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        attend.push_back(make_pair(i , x));   // <student ID , # of students exist when student i comes>
    }

    sort(attend.begin(), attend.end(), mySort);

    for (int i = 0; i < n; i++)
    {
        cout << attend[i].first << " ";
    }

    return 0;
}
