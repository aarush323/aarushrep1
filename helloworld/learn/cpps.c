#include<stdio.h>
int main(){
	int num;
	printf("enter the number: ");
	scanf("%d", &num);
	
	if ( num ==1 ){
		printf("none");
		}
		
	for ( int i =1; i <= num; i++){
		if ( i ==2){
            printf("%d ", i);
        }
		for ( int j = 2; j < i; j++){
		if ( i % j == 0){
		break;
		}
		if ( j == i-1){
		printf("%d ", i);
		}
		
	}
	}
	return 0;
}