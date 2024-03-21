#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int check(int n) {
	for (int i=2;i<n;i++){
		if (n%i==0) {
			return 0;
		}
	}
	return 1;
}



int main() {
	int n,count,i;
	printf("nhap n:");
	scanf("%d", &n);
	for (i=2;i<=n;i++) {
		if (check(i)) {
			printf("%d ", i);
		}
	}
	return 0;
} 
