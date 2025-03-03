#include<iostream>
#include <string>
using namespace std;
int main(){
    string str1 = "hi! how are you";
    /*for (char c: str1){
        cout << c ;
        // for encoding? cout<<char(c+1);
    }
    //str1.append(" how was your day?");
    str1 = str1 + " how was your day?";
    cout <<"\n"<<  str1;*/
    string str2;
    cin >> str2;
    for ( char c:str2){
        str1 = str1+c;
    }
     
     cout << str1;
}