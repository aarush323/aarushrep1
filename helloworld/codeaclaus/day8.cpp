#include<iostream>
using namespace std;
int main(){
    int t;
    cin >>t;
    for ( int k = 0; k<t ; k++){
        
    int n, l;
    cin >> n >> l;
    int arr[n],  count = 0;
    for ( int i = 0; i<n; i++){
            cin >> arr[i];
            
        }
    for ( int j = 0; j< n-1; j++){
            if (arr[j] + arr[j+1] == l){
                count++;
            }
        }
    cout << count << endl;
         }
    
}