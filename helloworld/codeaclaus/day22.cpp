#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while ( t > 0){
        t--;
        int n, m, x;
        cin >> n >> m >> x;

        m = 17 * 29 * m;
        for ( int i =0; i <n; i++){
            m = m - (i+1)*x;
        }

        int gold;
        gold = m / (17*29);
        int silver = ( m % (17*29) ) / 29;
        int copper = ( m % (17*29) ) % 29;


        cout << gold  << " "<< silver << " "<< copper << endl;
    }   
    return 0;
}