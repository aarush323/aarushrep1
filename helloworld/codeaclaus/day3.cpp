#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    
    cin >> t;
    while ( t>0){
        int flag = 0 ;
        t--;
    int n;
    int count =0;
    cin >> n;
    string str1;
    cin >> str1;
    for (char x: str1){ 
        x = tolower(x);
        
        if (( x == 'a') || (x =='e')|| (x =='i')|| (x =='o')|| (x =='u')){
            count ++;
            
            if (count >=2){
                flag = 1;
                cout << "HAPPY \n";
                break;
            }
            
        }
        else
        {
            count = 0;
            
        }
        
      
        }
          if (flag != 1){
            cout << "SAD\n";
          } 
        
            
        }

     
    
    
     }
    
    


    

    




