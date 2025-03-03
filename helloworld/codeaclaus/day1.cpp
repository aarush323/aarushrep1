#include<iostream>
using namespace std;
int main(){
   
        int t;
        cin >>t;
        while ( t>0){
            t--;
        int n, k;
        int total=0;
        int check;
        
        
        
        
        cin >> n >> k;
        int sum[n];
        for (int j=0;j<n ;j++){
        cin >> sum[j];

       
    }

    
    
        
        for ( int i =0 ; i <n ; i++){
           total = total + sum[i];
           if (total >= k){
            total = total- k;
            check = 1;
            
           }
           else{
            check = 0;
           
            cout << "NO "<< i+1;
            break;

           }
                 }
    if ( check == 1){
        cout << "YES";
    
    }
        }
    }

   
    
         
        
    
   
    

    
            
   
        
        
                
   
        

    
