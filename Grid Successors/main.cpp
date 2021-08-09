#include <iostream>

using namespace std;
int basic[3][3];

void modify()
{
    int modfy[3][3];
    modfy[0][0] = (basic[1][0] + basic[0][1]) % 2;
    modfy[0][1] = (basic[0][0] + basic[0][2] + basic[1][1]) % 2;
    modfy[0][2] = (basic[0][1] + basic[1][2]) % 2;

    modfy[1][0] = (basic[0][0] + basic[2][0] + basic[1][1]) % 2;
    modfy[1][1] = (basic[0][1] + basic[1][2] + basic[1][0] + basic[2][1]) % 2;
    modfy[1][2] = (basic[0][2] + basic[1][1] + basic[2][2]) % 2;

    modfy[2][0] = (basic[1][0] + basic[2][1]) % 2;
    modfy[2][1] = (basic[2][0] + basic[1][1] + basic[2][2]) % 2;
    modfy[2][2] = (basic[2][1] + basic[1][2]) % 2;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            basic[i][j] = modfy[i][j];
        }
    }
}

bool done()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(basic[i][j] > 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int n , ans;
    cin >> n;
    while(n--)
    {
        ans = -1;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                scanf("%1d", &basic[i][j]);
            }
        }

        while(!done())
        {
            modify();
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
