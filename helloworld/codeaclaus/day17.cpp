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
         for ( int i = 0; i < n-1; i++){
            for ( int j = i ; j <n; j++){
                if ( arr[i] + arr[j] == x){
                    cout << "succex";
                    count = true;
                    break;
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