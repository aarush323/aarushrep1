#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin >> t;
    while ( t > 0){
        t--;
        cin.ignore();
        string str1, str2;
        getline( cin, str1);
        getline( cin, str2);
        
        
        
        for ( char x : str1){
            
            for ( int i = 0 ;i < str2.length() ; i ++){
                
                if ( x == str2[i]){
                    str2.erase(i, 1);
                    break;

                }
            }
        }
        if ( str2.length() == 0){
            cout << "YES";
        }
        else {
            cout << "NO";
        }

           
            
        }
        
    }
