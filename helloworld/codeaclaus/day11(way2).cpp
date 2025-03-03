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
int rem, arr[count],sum = 0;
while (n != 0){
    rem = n % 10;
    sum += rem * count;
    count --;
   
    n = n / 10;
    
    
    
}
cout << sum << endl;
}
}