#include<iostream>
using namespace std;
int f(int i, int n){
    if (i!=0){
        return;
    }
    i = n * f(i, n-1);
    
}
int main(){
    int n, i;
   cout << "enter the limit upto which you have to print: ";
   cin >> n;
   
    f(i,n);
    cout << i;
    return 0;
}