#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while ( t>0){
        t-- ;
        int n, count;
        count == 1;
        cin >> n;
        while ( n != 1){
            if (n % 2 == 0){
            n = n/2;
            count ++;
            

        }
        else{
            n = (n*3)+1;
            count++;
            
        }
        
        }
        cout << count;
        
        
    }
} 