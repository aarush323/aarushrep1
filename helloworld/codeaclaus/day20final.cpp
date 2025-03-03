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
        for ( int i =0; i < n;i++){
            cin >> arr[i];
        }
        for ( int i = 0; i < n; i++){
            if ( arr[i] == 0 && arr[i] != n - 1){
                if( i + 1 <  m || i + 1 > p){
                    for ( int j = i+1; j < n; j++){
                        if (arr[j] != 0){
                            arr[i] = arr[j];
                            break;
                        }
                    }
                }
            }
        }
    float sum = 0;
        for ( int i =0; i <n; i++){
           // cout << arr[i] << " " ;
            if (arr[i] == 1){
                sum += 4;
            }
            else{
                sum+= arr[i];
            }
        }
       /*for ( int i =0; i <n; i++){
            cout << sum << " ";
        } */
       
        float result;
        result = sum / n;

        printf("%.2f\n", result);
    }
    return 0;
}