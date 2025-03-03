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
        int arr[n];
        for ( int i =0; i < n; i++){
            cin >> arr[i];
        }
        double ans = 1;
        for ( int i =0; i < n; i++){
            if ( i % 2 ==0 || i ==0){
                ans = arr[i]*ans;
            }
            else {
                
                ans = ans / arr[i];
            }
        }

        printf ( "%.2f \n", ans);


    }
    return 0;
}