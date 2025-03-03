#include<iostream>
using namespace std;
int main(){
    int n, arr[n], l, count = 0;
        cin >> n >> l;
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