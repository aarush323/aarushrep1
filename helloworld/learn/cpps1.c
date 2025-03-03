#include <stdio.h>
int main() {
 int X1[] = {0, 2, 4, 6};
 int X2[] = {1, 3, 5, 7};
 int Y[8]; // Assuming Y can hold all possible values
 int index = 0;
 for (int i = 0; i < 4; i++) {
    Y[index] =X1[i];
    Y[index + 1] = X2[i];
    index += 2;
 }
 printf("Values of Y:\n");
 for (int i = 0; i < 8; i++) {
 printf("%d ", Y[i]);
 }
 printf("\n");
 return 0;
}
