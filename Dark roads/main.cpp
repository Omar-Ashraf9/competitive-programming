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
    int m , n;
    while(cin >> m >> n , (m != 0 && n != 0))
    {
        vector <road> vec;
        int costBefore = 0 , costAfter = 0;

        for(int i = 0; i < n; i++)
        {
            road r;
            cin >> r.from >> r.to >> r.cost;
            vec.push_back(r);
            costBefore += r.cost;
        }

        sort(vec.begin(),vec.end(),mySort);

        for(int i = 0; i < m; i++)
        {
            parent[i] = -1;
            Height[i] = 0;
        }

        for(int i = 0; i < vec.size(); i++)
        {
            if(Union(vec[i].from , vec[i].to))
            {
                costAfter += vec[i].cost;
            }
        }
        cout << costBefore - costAfter << endl;
    }
    return 0;
}
