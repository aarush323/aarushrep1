#include<iostream>
#include<cstring>
using namespace std;
int converttomin(string x){
    int result = 24*60* stoi ( x.substr(0, 2)) + 60 * stoi(x.substr(3, 2)) + stoi(x.substr(6, 2));
    return result;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    string arr[n];
    int arr1[n];
    for ( int i =0; i <n; i++){
        getline(cin, arr[i]);
    }
   for ( int i=0; i <n;i++){
    arr1[i] = converttomin( arr[i]);

   }
   for ( int i=0; i < n-2; i++){
int final = arr1[i] + arr1[i+1] + arr1[i+2];
if (  final == 3000){
    cout << arr[i] << endl;
    cout << arr[i+2] << endl;
    break;
}
   }
    return 0;
}