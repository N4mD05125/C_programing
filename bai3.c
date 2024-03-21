#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int left=0, right=n-1, mid;
    while(left<=right) {
        mid=left+(right-left)/2;
        if (arr[mid]==target)
            return mid;
        else if (arr[mid]<target)
            left=mid+1;
        else
            right=mid-1;
    }
    return 0; 
}
int main() {
    int n, target;
    printf("nhap so phan tu cua mang:");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Nhap so can tim:");
    scanf("%d", &target);
    int result = binarySearch(arr, n, target);
    if (result != 0) {
        printf("%d", result);
    } else {
        printf("khong tim thay ");
    }
    return 0;
}
