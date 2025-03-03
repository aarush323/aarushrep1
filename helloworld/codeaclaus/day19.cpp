#include<iostream>
using namespace std;
int main(){
    char c;
    int n;
    cin >> c;
    n = c - 'A' + 1;
    //cout << n ;
    char result;
    for ( int i = 0; i <= n; i ++){
        for ( int j = 0; j <i ; j++){
            result = n + 'A' - i + j ;
            cout << result << " ";
        }
        if ( i != 0){
            cout <<   endl;
    }
}
}