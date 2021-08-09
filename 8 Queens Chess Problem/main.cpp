#include <bits/stdc++.h>

using namespace std;
int a , b , cnt;
int row[10];
bool valid(int r , int c)
{
    for(int last = 0; last < c; last++)
    {
        if(row[last] == r || (abs(row[last] - r) == abs(last - c)))
        {
            return false;
        }
    }
    return true;
}
void go(int curCol)
{
    // base case.
    if(curCol == 8 && row[b] == a)
    {
        cout << setw(2) << ++cnt << "     ";
        for(int i = 0; i < 8; i++)
        {
            cout << " " << row[i] + 1;
        }
        cout << endl;
    }


    // Recursive case.
    for(int r = 0; r < 8; r++)
    {
        if(valid(r,curCol))
        {
            row[curCol] = r;
            go(curCol + 1);
        }
    }
}
int main()
{
    int t;
    bool first = true;
    cin >> t;
    while(t--)
    {
        if(first)
        {
            first = false;
        }else
        {
            cout << "\n";
        }
        memset(row, 0 , sizeof row);
        cin >> a >> b;
        a-- , b--;
        cnt = 0;
        cout << "SOLN       COLUMN\n";
        cout << " #      1 2 3 4 5 6 7 8\n\n";

        // call the function.
        go(0);

    }
    return 0;
}
