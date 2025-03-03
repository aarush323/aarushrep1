#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while ( t > 0){
        t--;
        int H, D;
        cin >> H >> D;
        if ( H + D <=  100){
            cout << "Base Form" << endl;
        }
        else if(100 < H+D  && H+D< 501){
            cout << "Gear 2" << endl;
        }
        else if(500 < H+D  && H+D < 1001){
            cout << "Gear 3"<< endl;
        }
        else if(1000 < H+D && H+D < 5001){
            cout << "Gear 4" << endl;
        }
        else if(5000 < H+D && H+D <10001){
            cout << "Gear 5" << endl;
        }
        else{
            cout << "More Training" << endl;
        }
    }
}