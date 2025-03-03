#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while( t>0){
        t--;
    

    int n;
    cin>> n;
    int arr[n], score = 0 ;
    for ( int i = 0; i < n; i++){
        cin >> arr[i];
               }
    for ( int i = 0; i < n; i= i + 2){
        cout << arr[i] << endl;
        if ( arr[i] >  arr[i+1]){
            score = score + 1;
        }
        else if (arr[i] < arr[i+1]){
            score = score - 1;
        }
        else if (arr[i]== arr[i+1]){
            score = score ;
        }
               }
    if ( score > 0){
            cout << "0 \n";
        }
    else if ( score < 0){
            cout << "1 \n";
        }
    else {
            cout << "-1 \n";
        }
   
    }
}