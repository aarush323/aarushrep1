#include<iostream>
#include<string>
using namespace std;
int main(){
   string str1 ;
        getline( cin, str1);
        
        for ( char  c : str1){
             c = int (c + 3);

        }
        cout << str1;
}