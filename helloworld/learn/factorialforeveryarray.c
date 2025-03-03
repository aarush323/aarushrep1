#include<stdio.h>
int fact(int n){
    if (n ==0 || n==1 ){
       
        return 1;
    }
    else if(n<0){
        return 0;
    }
    
    else{
        return n*fact(n-1);
    }
}  
int main(){
    int X1;
    int Y[4];
    scanf("%d", &X1);
    int X[4] = {1,0,-1,X1};
    for ( int i =0; i< 4; i++){
    if ( X1 < 0 || X1 >= 6 ){
        printf("x1 should be 0<x1<6");
        break;
    }

    
    Y[i] = fact(X[i]);
    printf("%d \n", Y[i]);
    }

}