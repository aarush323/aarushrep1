#include <iostream>
using namespace std;
/*int prime(int n, int arr[]){
    
    return sum;

}
int cube( int n, int arr[]){
    int diff = 0;
    for ( int i =0; i <n; i++){
        
        for ( int j =0; j < arr[i]; j++){
            if ( arr[i] == j*j*j){
                 diff = diff +  arr[i];
            }
        }
    }
   
}*/
int main()
{
    int n; 
    cin >> n;
    int arr[n] ;
    
    for ( int i =0; i < n;i++){
        cin >> arr[i];
    }
    int sum = 0;
     for ( int i =0; i*i < n; i++){
        int flag = false;
        if ( i ==1 || i ==0 ){
            continue;
        }
         for ( int j = 0; j <i;j++){

            if (  j ==0 || j ==1){
            continue;
        }
            if ( i != j &&  i % j == 0){
               
                flag = true;
                 break;
            }
           
         }
          if ( flag == false ){
                sum += arr[i];
               // cout << arr[i] << endl;
            }
        

    }
int diff = 0;
    for ( int i =0; i <n; i++){
        
        for ( int j =0; j <= arr[i]; j++){
            if ( arr[i] == j*j*j){
                 diff = diff +  arr[i];
                // cout << "cube " << arr[i];
                 break;
            }
        }
    }
//cout << sum << " " << diff;
    int result = diff - sum;
cout << result <<endl;
   
   
    return 0;
}