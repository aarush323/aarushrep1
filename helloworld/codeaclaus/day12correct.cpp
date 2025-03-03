#include<iostream>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t > 0){
        t--;
        int n, row = 0, col = 0, result;
        cin >> n;
        for ( int i = 0; i < 2*n - 1; i++){
                for ( int j = 0; j < 2*n -1; j++){
                    if ( j < 2*n -2 - j){
                        col = j;
                    }
                    else{
                        col = 2*n -2 - j;
                    }
                    if ( i < 2*n -2 - i){
                        row = i;
                    }
                    else{
                        row = 2*n -2 - i;
                    }

                    if ( row < col){
                        result =n - row;
                    }
                    else {
                        result = n -col;
                    }
                cout << result << " ";
                }
                cout << endl ;
        }
            }
}