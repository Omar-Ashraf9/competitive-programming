#include <bits/stdc++.h>
using namespace std;
int abcde , n;
bool taken[10];
vector < pair<string , string> > vec;
string Fill(int num)
{
    string ret = to_string(num);
    while(ret.length() < 5)
    {
        ret = '0' + ret;
    }
    return ret;
}
void getpermu(int i)
{
    /// Base case.
    if(i == 5)
    {
        if(abcde % n == 0)
        {
            int fghij = abcde / n;
            /// this number will never be grater than 5-digits but maybe less than.
            Fill(fghij);

            string sforA = Fill(abcde);
            string sforB = Fill(fghij);

            int tmp[10] = {};
            for(int j = 0; j < sforB.length(); j++)
            {
                tmp[sforB[j] - '0']++;
            }
            /// to check that no character is repeated in the string fghij.
            for(int j = 0; j < 10; j++)
            {
                if(tmp[j] > 1)
                    return;
            }

            /// to check that no characters is common between abcde and fghij.
            for(int j = 0; j < sforA.length(); j++)
            {
                if(tmp[sforA[j] - '0'] > 0)
                    return;
            }
            vec.push_back({sforA,sforB});
        }
        return;
    }
    // recursive case.
    for(int d = 0; d < 10; d++)
    {
        if(taken[d])
            continue;
        taken[d] = true; abcde *= 10; abcde += d;    /// Do.
        getpermu(i + 1);                            ///  Recurse.
        taken[d] = false; abcde /= 10;             ///   undo.
    }

}
int main()
{
    bool first = true;
    while(cin >> n , n)
    {
        if(first)
        {
            first = false;
        }else
        {
            cout << "\n";
        }
        vec.clear();
        memset(taken, 0, sizeof(taken));
        getpermu(0);
        sort(vec.begin(), vec.end());

        if(vec.empty())
        {
            cout << "There are no solutions for " << n << ".\n";
        }else
        {
            for(auto i : vec)
            {
                cout << i.first << " / " << i.second << " = " << n << "\n";
            }
        }
    }

//    cout << a << endl;
    return 0;
}
