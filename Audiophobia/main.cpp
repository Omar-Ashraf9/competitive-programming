#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
const int N = 1e5 + 4;
int parent[N] , Height[N];

struct road
{
    int from , to , cost;
};

bool mySort(const road &r1 , const road &r2)
{
    return r1.cost < r2.cost;
}

int Find(int u)
{
    if(parent[u] == -1)
        return u;
    return parent[u] = Find(parent[u]);
}

bool same(int u , int v)
{
    return Find(u) == Find(v);
}

bool Union(int u , int v)
{
    if(same(u, v))
        return false;

    u = Find(u);
    v = Find(v);

    if(Height[u] < Height[v])
    {
        parent[u] = v;
        return true;
    }else
    {
        parent[v] = u;

        if(Height[u] == Height[v])
        {
            Height[u]++;
        }
        return true;
    }
}

int main()
{
    int c , s , q , u , v , cs = 0;
    while(cin >> c >> s >> q)
    {
        if(c == 0 && s == 0 && q == 0)
            break;
        vector <road> vec;
        vector < pair<int, int> > queries;

        map < pair<int, int>, int> queriesWithDist;

        for(int i = 0; i < s; i++)
        {
            road r;
            cin >> r.from >> r.to >> r.cost;
            vec.push_back(r);
        }

        for(int i = 0; i < q; i++)
        {
            cin >> u >> v;
            queries.push_back(make_pair(u,v));
            queriesWithDist[make_pair(u,v)] = 0;
        }
        sort(vec.begin(),vec.end(),mySort);

        for(int i = 0; i < c; i++)
        {
            parent[i] = -1;
            Height[i] = 0;
        }

        for(int i = 0; i < vec.size(); i++)
        {
            if(Union(vec[i].from , vec[i].to))
            {
                for(map <pair <int,int> , int>::iterator itr = queriesWithDist.begin(); itr != queriesWithDist.end(); itr++)
                {
                    int from = itr->first.first;
                    int to = itr->first.second;
                    if(same(from,to) && !itr->second)
                        itr->second = vec[i].cost;
                }
            }
        }

        if(cs)
            cout << endl;
        cout << "Case #" << cs + 1 << endl;
        for(vector < pair<int,int> >::iterator itr = queries.begin(); itr != queries.end(); itr++)
        {
            int intensity = queriesWithDist[*itr];
            if(!intensity)
                cout << "no path" << endl;
            else
                cout << intensity << endl;
        }
        cs++;
        queries.clear(),queriesWithDist.clear();
    }
    return 0;
}
