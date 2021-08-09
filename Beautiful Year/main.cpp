#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int y;
    int result;
    string s;
    cin >> y;
    for(int i = y + 1; i <= 10000; i++)
    {
        s = to_string(i);
        sort(s.begin() , s.end());
        s.erase(unique(s.begin() , s.end()) , s.end());
        if(s.length() < 4)
        {
            y++;
        }else
        {
            result = i;
            break;
        }
    }
    cout << result << endl;

    return 0;
}
