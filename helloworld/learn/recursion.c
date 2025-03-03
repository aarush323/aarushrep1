#include<stdio.h>
int recursion(int n){
    if ( n==0 || n==1){
        return 1;
    }
    return n*recursion(n-1);
}
int main(){
    int n;
    scanf("%d", &n);
    int ans = recursion(n);
    printf("%d", ans);
}