#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1 = "my name is aarush";
    int count;
    cout << str1[0] << "\n";
     cout << str1.length() << "\n";
     for (char x: str1){
    count++;
    }
    cout << count;
}

 