#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while ( t > 0){
        t--;
        int n;
    cin >> n;
    int m, p;
    cin >> m >> p;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            if (m <= i && i <= p)
            {
            }
            else
            {
                if (i + 1 < m || i + 1 > p)
                {
                    if (arr[i + 1] == 1)
                    {
                        arr[i] = arr[i + 1];
                    }
                    else
                    {
                        if (arr[i] != 0)
                        {
                            if ( i - 1 < m || i -1 >p){
                            arr[i] = arr[i - 1];
                            }
                            else {
                                arr[i] = arr[i+1];
                            }
                        }
                        else{
                            arr[i] = arr[i+1];
                        }
                    }
                }
            }
        }
    }
    float sum = 0;
   
    cout << endl;
    for (int i = 0; i <= n; i++)
    {
       // cout <<  " " << sum << " ";
        if ( arr[i] == 1){
        sum +=  4 *arr[i];
        }
        else{
            sum += arr[i];
        }
    }
    float result = sum / n;
    cout << result << endl;
    }
    return 0;
}