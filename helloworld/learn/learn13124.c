#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
char str1[] = "zzz hello, ";
char str2[] = "World!";
if (strcmp(str1, str2)> 0){
    printf("string one comes after string 2 alphabetically \n");
}
int length = strlen(str1);
printf("%d", length);

strcpy(str2, str1);
printf("%s", str2);
}