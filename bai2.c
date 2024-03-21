#include <stdio.h>

void swap(int *x, int *y) {
    int t=*x;
    *x=*y;
    *y=t;
}
void bubblesort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j]>arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    bubblesort(arr, n);
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
