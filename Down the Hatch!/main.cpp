#include <iostream>

using namespace std;

int main()
{
    int n , juiceCnt = 0;
    string m;
    cin >> n;
    cin >> m;
    for(int i = n; i < m.size(); i += n)
    {
        if(m[i - 1] == m[i - 2] && m[i - 2] == m[i - 3])
        {
            juiceCnt++;
        }
    }
    cout << juiceCnt << endl;
    return 0;
}
