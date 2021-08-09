#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vec(6);
    int n;
    int total_sum = 0;
    int part_sum;
    bool flag = false;
    for(int i = 0; i < 6; i++)
    {
        cin >> n;
        total_sum += n;
        vec[i] = n;
    }
    for(int i = 0; i < 6; i++)
    {
        for(int j = i + 1; j < 6; j++)
        {
            for(int k = j + 1; k < 6; k++)
            {
                part_sum = vec[i] + vec[j] + vec[k];
                if(part_sum == total_sum - part_sum)
                {
                    flag = true;
                    break;
                }
            }
        }
    }
    if(flag)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }


    return 0;
}
