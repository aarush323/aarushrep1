#include <iostream>
using namespace std;
#include <cmath>
bool isprime( long long n){
     if ( n <2)
        return false;
    for ( long long  j =2; j<n; j++){
       
    if ( n % j == 0){
        
        return false;
        
    }
    }
    return true;
}

bool iscube( long long  x){
    for ( long long i = 1; i <=sqrt(x);i++){
        if ( x == i*i*i){   
            return true;
        }
        
        
    }
    return false;
}
int main()

{
    long long int n;
    cin >> n;
    long long int arr[n];
    long long int diff = 0, sum = 0;
    for ( int i =0; i<n;i++){
        cin >> arr[i];
    }
    for ( int i =0; i<n;i++){
        if (isprime(i)){
            diff += arr[i];
            //cout << arr[i] << " prime" << endl;
        }
        if (iscube( arr[i])){
            sum += arr[i];
            //cout << arr[i] << " cube" << endl;
        }
    
}

long long int result = sum - diff;
cout << result;
}