#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a , b , c;
    cin >> a >> b >> c;
    vector <int> vec;
    int r1 = a + b + c;
    vec.push_back(r1);
    int r2 = (a + b) * c;
    vec.push_back(r2);
    int r3 = (b + c) * a;
    vec.push_back(r3);
    int r4 = a * b * c;
    vec.push_back(r4);
    auto it = max_element(begin(vec) , end(vec));
    cout << *it << endl;

    return 0;
}
