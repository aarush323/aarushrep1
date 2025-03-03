#include<stdio.h>
int main(){
    int i, j;
    int mat1[3][3];
    int mat2[3][3];
    int sum [3][3], diff[3][3], product[3][3];
    printf("enter elements serially \n");
    for ( i = 0; i <3; i++){
        for ( j=0; j<3; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
   
    for ( i = 0; i <3; i++){
        for ( j=0; j<3; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    for ( i = 0; i <3; i++){
        for ( j=0; j<3; j++){
            printf("%d  ", mat1[i][j]);
        }
        printf("\n");
    }
        printf("\n");
    for ( i = 0; i <3; i++){
        for ( j=0; j<3; j++){
            printf("%d  ", mat2[i][j]);
        }
        printf("\n");
    }

    for ( i = 0; i <3; i++){
        for ( j=0; j<3; j++){
            sum[i][j]= mat1[i][j] + mat2[i][j];
        }
    }
    printf("\n");
    for ( i = 0; i <3; i++){
        for ( j=0; j<3; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    for ( i = 0; i <3; i++){
        for ( j=0; j<3; j++){
            diff[i][j]= mat1[i][j] - mat2[i][j];
        }
    }
    printf("\n");
    for ( i = 0; i <3; i++){
        for ( j=0; j<3; j++){
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    for ( i = 0; i <3; i++){
        for ( j=0; j<3; j++){
            product[i][j]= mat1[i][j] * mat2[i][j];
        }
    }
    printf("\n");
    for ( i = 0; i <3; i++){
        for ( j=0; j<3; j++){
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    
}