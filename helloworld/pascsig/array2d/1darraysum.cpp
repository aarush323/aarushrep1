#include<iostream>
using namespace std;

int main()
{   int t;
    cin >> t;
    
    for (int k=0;k<t;k++){
        int n;
    cin >> n;
        
    int sum[n]; int summ = 0;
    for (int j=0;j<n ;j++){
        cin >> sum[j];
    }

    
    for(int i=0; i<n;i++)
    {
        summ = summ + sum[i];
    }
    cout<<summ <<"\n";
    }
    
    return 0;
}
