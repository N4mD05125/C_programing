#include<stdio.h>
#include<math.h>

int main() {
	int n,i;
	printf("input something:");
	scanf("%d", &n);
	int m=n/2;
	if (n%2==1) {
		printf("%d\n", m);
		for (i=1;i<m;i++) {
			printf("2 ");
			
		}
		printf("3");
	}
	else {
		printf("%d\n", m);
		for (i=1;i<=n/2;i++) {
			printf("2 ");
		}
	}
	return 0;
}
