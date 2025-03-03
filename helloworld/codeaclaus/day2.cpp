#include<iostream>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t>0){
        t--;
    int x,y,months;

    cin >> x >> y;

    months = y/x;
     int remainder= y % x; 

    if ( remainder !=0){
        cout << months << endl;
    }
    else if (remainder == 0 ){
        cout << months-1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    }

}