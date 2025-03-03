#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while ( t>0){
        t--;
    int x, y, z;
    cin >> x >> y >>z;
    if ( x +y - z == 0 || x - y + z == 0 || -x +y +z ==0){
        cout << "YES \n";
    }
    else {
        cout << "NO \n";
    }
    }
}