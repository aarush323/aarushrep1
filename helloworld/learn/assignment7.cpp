#include <iostream>
using namespace std;
int main()
{int t =0;
cin >> t;
while ( t > 0){
    t--;
    int n;
    cin >> n;
    int m, p;
    cin >> m >> p;
    int arr[n];
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //while (flag){
      //  flag = false;
        
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            if (i < m || i >p)
            {
            
                if (i + 1 < m || i + 1 > p)
                {
                    for ( int j = i +1; j < n; j++){
                        flag = false;
                        if (arr[j] != 0){
                            arr[i] =arr[j];
                            flag = true;
                            break;
                        }
                        else{
                            arr[i] = 0;
                        }
                        
                    }
                    
                    }
                else{
                    arr[i] = 0;
                }
                }
            }
        }
    
   // }
    float sum = 0;
   
   // cout << endl;
    for (int i = 0; i < n; i++)
    {
       // cout <<  " " << sum << " " ;
        if ( arr[i] == 1){
        sum +=  4 ;
        }
        else if ( arr[i] == -1){
            sum += -1;
        }
    }
    //cout << endl;
    float result = sum / n;
    printf("%.2f \n", result);
}
}