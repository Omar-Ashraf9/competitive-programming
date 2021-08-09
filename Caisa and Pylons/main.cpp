#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n , x;
    int dollars = 0 , Energy = 0;
    vector <int> vec;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        vec.push_back(x);
    }
    dollars = vec[0];
    for(int i = 0; i < n - 1; i++)
    {
        if(vec[i] >= vec[i+1])
        {
            Energy += vec[i] - vec[i+1];
        }else
        {
             if(Energy >= vec[i + 1] - vec[i])
             {
                 Energy -= vec[i + 1] - vec[i];
             }else
             {
                 dollars += (vec[i + 1] - vec[i]) - Energy;
                 Energy = 0;
             }
        }
    }
    cout << dollars << endl;
    return 0;
}
