#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n , m , a;
    vector < pair <int,int> > vec (10,make_pair(0,0));
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        vec[i].first = a;
        vec[i].second++;
    }

    vector< pair <int,int> > :: iterator it;

    for(int i = 0; i < m; i++)
    {
        cin >> a;
        pair <int , int> p = make_pair(a,1);
        it = find(vec.begin(), vec.end(), p);
        int position = distance(vec.begin() , it);
        vec[position].second++;
    }

    for(int i = 0; i < 10; i++)
    {
        if(vec[i].second > 1)
        {
            cout << vec[i].first << " ";
        }
    }


    return 0;
}
