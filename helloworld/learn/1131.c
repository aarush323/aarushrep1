#include<stdio.h>
#include<stdlib.h>
struct Students{
    int x0;
    char x1[20];
    float x2;

};
void f(struct Students *ptr){
     for ( int i =0; i<5; i++){
        printf("roll no \t name \t marks \t \n");
        printf("%d\t\t%s\t%.2f\t\t\n", ptr[i].x0, ptr[i].x1, ptr[i].x2);
    }

}
int main(){
   struct Students student[5];
   struct Students *ptr = student;
    for ( int i =0; i<5; i++){
        printf("enter roll: ");
        scanf("%d", &student[i].x0);
         printf("enter name: ");
        scanf("%s", &student[i].x1);
         printf("enter marks: ");
        scanf("%f", &student[i].x2);

        if (student[i].x2 <= 40 && student[i].x2 >= 38){
            student[i].x2 +=3;
        }
    }   
    f(ptr);
   
}
/*void pointer(int *ptr){
    for ( int i=0; i<6;i++){
        printf("the value and address at %d is : %d   and %d \n", i, *(ptr+i), &ptr[i]);
    }

}
int main(){
   int x[] = {1,2,3,4,5,6};
   int *ptr = x;
   pointer(ptr);
  
}*/