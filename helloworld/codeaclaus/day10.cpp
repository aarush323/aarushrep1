#include<iostream>
using namespace std;
int f(int x) {
    if (x == 0 || x == 1) {
        return 1;
    }
    return x * f(x - 1); 
}
int main(){
    int t;
    cin >> t;
    while ( t > 0){
        t--;
    
    int n, rem , count = 0;
    cin >> n;
    int t = n;
    if ( n==0){
        cout << 0 ;
    }

    while (t != 0) { 
        t = t / 10;  
        count++;     
    }

   
    
    int arr[count], num = 0, sum =0;
   
    while ( n !=0){
        rem = n % 10;
        if ( rem % 2 != 0){
            arr[num] = rem;
            num ++;
        }
       n = n/ 10;
    }
    for ( int i =0; i<num; i++){
        cout << arr[i];
        f(arr[i]);
        sum += f(arr[i]);

    }
    cout << sum << endl;

    }
    
        
        

    }

