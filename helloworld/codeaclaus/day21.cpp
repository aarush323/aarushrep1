#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        t--;
        int n;
        cin >> n;
        int arr[n][n];
        int ans[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                ans[i][j] = arr[i][j];
            }
        }

        /*
        for ( int i =0; i <n; i++){
              for ( int j =0; j <n; j++){
                  cout << arr[i][j] << " ";
              }
              cout << endl;
      }*/
        int start = arr[0][0];
        ans[0][0] = 2;

        bool flag = true;
        
            while ( flag){
                flag = false;
            for (int i = 0; i < n; i++)
            {

                for (int j = 0; j < n; j++)
                {
                    flag = false;

                    if ((i == 0 && j == 0) || (ans[i][j] == 2))
                    {
                        if (ans[i][j] == 2)
                        {

                            if (i + 1 < n && arr[i + 1][j] == start)
                            {
                                ans[i + 1][j] = 2;
                                flag = true;
                            }
                            if (j + 1 < n && arr[i][j + 1] == start)
                            {
                                ans[i][j + 1] = 2;
                                flag = true;
                            }
                            if (i - 1 >= 0 && arr[i - 1][j] == start)
                            {
                                ans[i - 1][j] = 2;
                                flag = true;
                            }
                            if (j - 1 >= 0 && arr[i][j - 1] == start)
                            {
                                ans[i][j - 1] = 2;
                                flag = true;
                            }

                        }
                    }
                    
                    }
                   
                }
            }

             for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
            }
        }

       
    
    return 0;
}