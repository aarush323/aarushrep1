#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while ( t > 0){
        t--;
        int n , x ;
        cin >> n >> x;
        int arr[n],  t, min = 0;
        for ( int i = 0; i < n; i++){
            cin >> arr[i];
            
        }
        for ( int j = 0; j < n -1; j++){
        for ( int i = 0; i < n -1   ; i++){
            if ( arr [i] <arr[i+1]){
                t = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = t;
            }
        }
            
            
            
        }
        int count = 0;
          for ( int i = 0; i < n  ; i++){
            if (arr[i] > min){
                count ++;
            }
            if ( count == x){
                cout << arr[i];
            } 
            
            }
         
            
            }
}
    
    
