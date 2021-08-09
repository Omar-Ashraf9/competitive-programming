#include <iostream>

using namespace std;
const int N = 1e5;
int p[N] , h[N] , groupSize[N];
int find_set(int u)
{
    if(p[u] == -1)
        return u;
    return p[u] = find_set(p[u]);
}
bool same(int u , int v)
{
    return find_set(u) == find_set(v);
}
void union_set(int u , int v)
{
    if(same(u , v))
        return;
    u = find_set(u);
    v = find_set(v);
    if(h[u] < h[v])
    {
        p[u] = v;
        groupSize[v] += groupSize[u];
    }else
    {
        p[v] = u;
        groupSize[u] += groupSize[v];
        if(h[u] == h[v])
        {
            h[u]++;
        }
    }
}
int main()
{
    int t , n , m , a , b;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
        {
            p[i] = -1;
            h[i] = 0;
            groupSize[i] = 1;
        }

        for(int i = 0; i < m; i++)
        {
            cin >> a >> b;
            union_set(a,b);
        }
        int Max = 0;
        for(int i = 1; i <= n; i++)
        {
            if(p[i] == -1)
            {
                Max = max(Max,groupSize[i]);
            }
        }
        cout << Max << endl;

    }
    return 0;
}
