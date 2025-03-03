#include<iostream>
#include <math.h>
using namespace std;
int main(){
int t;
cin >> t;
while ( t >0){
    t--;
int n;
cin >> n;
int count = 0;
int t = n;
  while (t != 0) { 
        t = t / 10;  
        count++;  
       // cout << "count:" << count << endl;   
    }
int rem, arr[count], x = 0;
while (n != 0){
    arr[x] = n % 10;
   // cout << arr[x] << endl;
    x++;
    n = n / 10;
    
    
    
}
int sum =0;

    
        for ( int i = 0; i < count; i ++){
        sum += arr[i]*(count - i);
    
        //cout << arr[i]*(count - i) << endl;
        }
        
    
    

cout << sum << endl;


}
}