#include <stdio.h>
int main() {
 char x1[11]; // Array to store the string (10 characters + null

 int x2;
 printf("Enter a string of 10 characters: ");
 scanf("%10s", x1);
 printf("Enter a value for x2 (0 < x2 < 6): ");
 scanf("%d", &x2);
 if (x2 < 0 || x2 > 5) {
 printf("Invalid input for x2.\n");
 return 1;
 }
 printf("Characters with frequency %d:\n", x2);
 for (int i = 0; x1[i] != '\0'; i++) {
 int count = 0;
 for (int j = 0; x1[j] != '\0'; j++) {
 if (x1[i] == x1[j]) {
 count++;
 }
 }
 if (count == x2) {
 printf("%c ", x1[i]);
 }
 }
 printf("\n");
 return 0;
}