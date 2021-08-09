#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    while(cin >> n, n != 0)
    {
        /// Initialize.
        int oddRowsCnt = 0, oddColsCnt = 0, oddRowIndx, oddColIndx;

        int** arr = new int*[n];
        for(int i = 0; i < n; i++)
        {
            arr[i] = new int[n];
        }

        /// scan the values of the matrix.
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        // sum every row.
        for(int i = 0; i < n; i++)
        {
            int sum = 0;
            for(int j = 0; j < n; j++)
            {
                sum += arr[i][j];
            }
            if(sum % 2 == 1)
            {
                oddRowsCnt++;
                oddRowIndx = i + 1;
            }

        }

        //sum every column.
        for(int j = 0; j < n; j++)
        {
            int sum = 0;
            for(int i = 0; i < n; i ++)
            {
                sum += arr[i][j];
            }
            if(sum % 2 == 1)
            {
                oddColsCnt++;
                oddColIndx = j + 1;
            }

        }

        if(oddRowsCnt == 0 && oddColsCnt == 0)
        {
            cout << "OK" << endl;
        }
        else if(oddRowsCnt == 1 && oddColsCnt == 1)
        {
            cout << "Change bit (" << oddRowIndx << "," << oddColIndx << ")" << endl;
        }
        else
        {
            cout << "Corrupt" << endl;
        }
    }
    return 0;
}
