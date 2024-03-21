#include <stdio.h>

void swap(int *a, int *b) {
    int t=*a;
    *a=*b;
    *b=t;
}
int main() {
    int num1, num2;
    printf("Nhap so thu nhat:");
    scanf("%d", &num1);
    printf("Nhap so thu 2:");
    scanf("%d", &num2);
    swap(&num1, &num2);
    printf("num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}