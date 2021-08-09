#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
	string question , answer;
	string tocheck = "";

	cin >> question >> answer;

	if(question == "0")
    {
        if(answer == "0")
        {
            cout << "OK" << endl;
            return 0;
        }
        else
        {
            cout << "WRONG_ANSWER" << endl;
            return 0;
        }
    }

	sort(question.begin(), question.end());

	int cnt = question.find_first_not_of('0');
    tocheck += question[cnt];

    for(int i = 0; i < cnt; i++)
    {
        tocheck += "0";
    }

    for(int i = cnt+1; i < question.size(); i++)
    {
        tocheck += question[i];
    }

    if(tocheck == answer)
    {
        cout << "OK" << endl;
    }
    else
    {
        cout << "WRONG_ANSWER" << endl;
    }

    return 0;
}
