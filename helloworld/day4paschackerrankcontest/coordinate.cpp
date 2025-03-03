#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int  k = 0 ; k < t; k++){
        int num1 , num2;
        cin >> num1 >> num2;
        if ( num1 !=0 && num2 != 0){
          if (num1>0){
            if (num2>0){
                cout << "1st Quadrant \n";
            }
            else{
                cout << "4th Quadrant \n";
            }

          }
          else {
            if ( num2>0){
                cout << "2nd Quadrant \n";
            }
            else {
                cout << "3rd Quadrant \n";
            }
          }
        
        
        }
        else if( num1==0 && num2!=0){
            cout << "Y axis \n";
        }
        else if(num1 != 0 && num2 ==0){
            cout << "X axis \n";
        
        }
        else if ( num1 ==0 && num2==0){
            cout << "Origin \n";
        }
    }
}