#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while ( t >0){
        t--;
        int n;
        cin >> n;
        for ( int i =0; i < 2*n-1; i++){
            for ( int j = 0; j < n ; j++){
                if ( (i == 0 || i == 2*n-2) || (j == 0 || j ==2*n - 1)){
                    cout << n << " ";
                }
                else{
                    if ( i > j){
                    if (i < n -j){
                cout << abs( n - ( n - j)) << " ";
                    }
                    else {
                        cout << abs( n -i) << " ";
                    }
                }
                else{
                    if ( j < n - i){
                        cout << abs(n-i) << " ";
                    }
                    else{
                        cout << j << " ";
                    }
                }
                            }
            }


                for ( int j = n; j <2*n-1 ; j++){
                if ( (i == 0 || i == 2*n-2) || (j == 0 || j ==2*n - 2)){
                    cout << n << " ";
                }
                
                else{
                    if ( i > j){
                        if ( ( i <  2*n - 1 - j)){
                cout << abs( 2*n - 1 - j) << " ";
                    }
                        else{
                        cout << abs( 2* n - 1 i) << " ";

                    }
                    }
                    else{
                        if ( j < 2*n - 1 -i){
                            cout << abs(2*n - 1- i) << " ";
                        }
                        else{
                            cout << j << " ";
                        }
                        
                    }
                

                
                }
                }
                            
                cout << "\n";
        }
    }
}