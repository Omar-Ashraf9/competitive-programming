#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector < pair<int,int> > vec;
    vector <int> start;
    vector <int> End;
    bool found = false;
    int n , l , r;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> l >> r;
        vec.push_back(make_pair(l,r));
        start.push_back(l);
        End.push_back(r);
    }
    l = *min_element(start.begin(), start.end());
    r = *max_element(End.begin(), End.end());

    //auto check = make_pair(l, r);

    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i].first == l && vec[i].second == r)
        {
            cout << i+1 << endl;
            found = true;
        }
    }
    if(!found)
    {
        cout << -1 << endl;
    }


    return 0;
}
