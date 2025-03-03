#include<iostream>
using namespace std;
int main(){
    int n ;
    cout <<"enter number of rows and columns of the pattern: ";
    cin >> n;
    for ( int i = 1; i <=n; i++){
    for(int j=1; j<=i; j++){
        if (i == 1 || i == n){
            cout << "*";
        }
        else{
            if (j ==0 || j ==n){
                cout << "*";
            }
            else{
                cout << "";
            }
            }
        }
        cout << "\n";
    }
    return 0;
}


