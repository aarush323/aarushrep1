#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while ( t>0){
        t--;
        int n;
        cin >>n;
        int  total1 =0, total2 =0, diff = 0, ans = 0, max = 0;
        int gryf[n], slyt[n], count = 0;
        for ( int i =0; i<n;i++){
            cin >> gryf[i] >> slyt[i];
            
        }
        for ( int i =0; i<n;i++){
            total1= total1 + gryf[i];
            total2 = total2 + slyt[i];
            diff = abs(total1 - total2) ;
            if ( diff > max){
                max = diff;
                if ( total1 > total2){
                ans = 1;
            }
            else {
                ans = 2;
            }
            }
            
             
        }
    cout << ans << " "<< max << endl;

}
}
