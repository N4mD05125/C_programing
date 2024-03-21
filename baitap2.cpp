#include<stdio.h>
#include<math.h>

int main() {
	int n, i;
	printf("input so phan tu: ");
	scanf("%d", &n);
	while (n>20) {
		printf("n phai be hon hoac bang 20");
		scanf("%d", &n);
	}
	int a[n];
	for (i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	for (i=0; i<n; i++) {
		printf("\n%d", a[i]);
	}
	int max = a[0], min = a[0];
	for (i=0; i<n; i++) {
		if (max<a[i]) {
			max = a[i];
		}
	}
	for (i=0; i<n; i++) {
		if (min>a[i]) {
			min = a[i];
		}
	}
	printf("\nMax: %d, Min: %d", max, min);
	return 0;
}
