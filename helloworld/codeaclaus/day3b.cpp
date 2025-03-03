#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 
        string str1;
        cin >> str1;

        int count = 0; 
        bool flag = false; 

        for (char x : str1) {
            
            if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
                count++;
                if (count >= 2) {
                    flag = true;
                    cout << "HAPPY\n";
                    break; 
                }
            } else {
                count = 0; 
            }
        }

        if (flag!= true) {
            cout << "SAD\n";
        }
    }

    return 0;
}
