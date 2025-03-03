#include<stdio.h>
int main(){
    char x1[11];
    int check[10] = {0}, count[10];
    int x2;
    scanf("%d", &x2);
    printf("enter string: ");
    scanf("%10s", &x1);
   // printf("%6s", x1);

    
    
    for ( int i=0; i<9;i++){
        count[i] = 1;
        
        
        for ( int j=i+1; j<10;j++){
            if (x1[i] == x1[j]){
                count[i]++;
                check[j] =1;
            }
        }
        if ( count[i] == x2){
            if (check[i]== 0)
            printf("%c ", x1[i]);
        } 
       // printf("%d", count);
    }
    
}