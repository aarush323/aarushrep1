#include<stdio.h>
#include<string.h>
int g(char *str){
   printf("%s \n", str);
   return strlen(str);
}
void f(){
   char str[] = "Hello World";
   int length = strlen(str);
   int length2 = g(str);
   if (length - length2  == 0){
      printf("True");
   }
   else{
      printf("False");
   }

}
int main(){
   f();
   
}