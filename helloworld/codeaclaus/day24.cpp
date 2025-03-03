#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while ( t >0){
        t--;
        int n;
        cin >> n;
        int arr[n];
        int res[n];
        for ( int i =0; i <n; i++){
            cin >> arr[i];

        }
        for ( int i =0; i < n; i++){
            int k = arr[i];
            res[k-1] = i+1;
        }
        for ( int i =0; i < n; i++){
            cout << res[i] << " ";
        }
        if ( t >0) cout << endl;
    }
    return 0;
}