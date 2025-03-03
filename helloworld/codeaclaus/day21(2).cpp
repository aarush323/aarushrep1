#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t > 0)
    {
        t--;
        int n;
        cin >> n;

        int arr[n][n];
        int ans[n][n] = {0}; 

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> ans[i][j];
            }
        }

        int start = ans[0][0];
        arr[0][0] = 2;         

        bool flag = true;

        while (flag)
        {
            flag = false;

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (ans[i][j] == 2)
                    {
                       
                        if (i + 1 < n && arr[i + 1][j] == start && ans[i + 1][j] != 2)
                        {
                            ans[i + 1][j] = 2;
                            flag = true;
                        }
                        
                        if (j + 1 < n && arr[i][j + 1] == start && ans[i][j + 1] != 2)
                        {
                            ans[i][j + 1] = 2;
                            flag = true;
                        }
                       
                        if (i - 1 >= 0 && arr[i - 1][j] == start && ans[i - 1][j] != 2)
                        {
                            ans[i - 1][j] = 2;
                            flag = true;
                        }
                        
                        if (j - 1 >= 0 && arr[i][j - 1] == start && ans[i][j - 1] != 2)
                        {
                            ans[i][j - 1] = 2;
                            flag = true;
                        }
                    }
                }
            }
        }
\
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }

        
        if (t > 0)
            cout << endl;
    }

    return 0;
}
