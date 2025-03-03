#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while ( t > 0){
        t--;
        int n, x;
        cin >> n >> x;
        int arr[n];
        bool  count = false;
        for ( int i = 0; i < n; i++){
            cin >> arr[i];
        }
         for ( int i = 0; i < n-2; i++){
            for ( int j = i + 1 ; j <n-1; j++){
                for ( int k = j + 1; k < n; k++){
                if ( arr[i] + arr[j] +arr[k] == x){
                    
                    count = true;
                    break;
                }
                }
                
            }
        }
        if (!count){
            cout << "NO" << endl;
        }
        else{ 
            cout << "YES"<< endl;
        }
    }
}