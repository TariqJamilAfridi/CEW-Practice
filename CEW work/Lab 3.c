//Question NO.01:
#include <stdio.h>
void swap(int *x, int *y) {
 int temp = *x;
 *x = *y;
 *y = temp;
}
int main() {
 int a = 5;
 int b = 10;
 printf("Before swapping: a = %d, b = %d\n", a, b);
 swap(&a, &b)
 printf("After swapping: a = %d, b = %d\n", a, b);
 return 0;
}
//Question NO.02:
#include <stdio.h>
void printReverse(const char *str) {
 const char *end = str;
 while (*end != '\0') {
 end++; }
 while (end != str) {
 end--; // printf("%c", *end);
 }
 printf("\n");
}
int main() {
 const char *str = "Hello, World!";
 printf("Original string: %s\n", str);
 printf("String in reverse: ");
 printReverse(str);
 return 0;
}
//Question NO.03:
#include <stdio.h>
int main() {
 int n;
 printf("Enter the size of the array: ");
 scanf("%d", &n);
 int arr[n];
 printf("Enter %d elements:\n", n);
 int *ptr = arr;
 for (int i = 0; i < n; i++) {
 scanf("%d", ptr);
 ptr++; }
 printf("Array elements: ");
 ptr = arr; for (int i = 0; i < n; i++) {
 printf("%d ", *ptr);
 ptr++; }
 printf("\n");
 return 0;
}
//Question NO.04:
#include <stdio.h>
int main() {
 int n, key;
 printf("Enter the size of the array: ");
 scanf("%d", &n);
 int arr[n];
 printf("Enter %d elements:\n", n);
 int *ptr = arr for (int i = 0; i < n; i++) {
 scanf("%d", ptr);
 ptr++;
 }
 printf("Enter the element to search for: ");
 scanf("%d", &key);
 ptr = arr; int found = 0;
 for (int i = 0; i < n; i++) {
 if (*ptr == key) {
 found = 1;
 break;
 }
 ptr++; }
 if (found) {
 printf("Element %d found in the array.\n", key);
 } else {
 printf("Element %d not found in the array.\n", key);
 }
 return 0;
}
//Question NO.05:
#include <stdio.h>
void addMatrices(int *mat1, int *mat2, int *result, int rows, int cols) {
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 *(result + i * cols + j) = *(mat1 + i * cols + j) + *(mat2 + i * cols + j);
 }
 }
}
int main() {
 int rows, cols;
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 printf("Enter the number of columns: ");
 scanf("%d", &cols);
 int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];
 printf("Enter elements for the first matrix:\n");
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 scanf("%d", &matrix1[i][j]); }
 }
 printf("Enter elements for the second matrix:\n");
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 scanf("%d", &matrix2[i][j]); }
 }
 addMatrices(&matrix1[0][0], &matrix2[0][0], &result[0][0], rows, cols);
 printf("Resultant matrix after addition:\n");
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 printf("%d ", result[i][j]); }
 printf("\n");
 }
 return 0; }
