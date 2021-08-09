#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int n;
    bool first_pair = false;
    bool second_pair = false;
    string s;
    vector <string> input;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        input.push_back(s);
    }
    for(int i = 0; i < n; i++)
    {
        string temp = input[i];
        if(temp[0] == 'O' && temp[1] == 'O')
        {
           temp[0] = '+';
           temp[1] = '+';
           input[i] = temp;
           first_pair = true;
           break;
        }else if(temp[3] == 'O' && temp[4] == 'O')
        {
           temp[3] = '+';
           temp[4] = '+';
           input[i] = temp;
           second_pair = true;
           break;
        }
    }
    if(first_pair || second_pair)
    {
        cout << "YES" << endl;
        for(auto a : input)
        {
            cout << a << endl;
        }
    }else
    {
        cout << "NO" << endl;
    }

    return 0;
}
