#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while ( t > 0){
        t--;
        int n, k, rem= 0, sum = 0;
        cin >> n >> k;
        while ( n!= 0){
            rem = n % 10;
            sum += rem;
            n = n / 10;
        }
        
        
        if ( sum % k == 0){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}