#include<stdio.h>
#include<math.h>

int main() {
	int m,i,n; //n la so bac thang, tim boi nho nhat cua m
	printf("input 2 so:");
	scanf("%d%d", &n,&m);
	int min, max = n;
	if (n%2==0) {
		min = n/2;
	}
	else {
		min = n / 2 + 1;
	}
	if (n<m) {
		printf("-1");
	}
	for (i=min;i<=max;i++) {
		if (i%m==0) {
			printf("%d", i);
			break;
		}
	}
	if (i==max) {
		printf("-1");
	}
	return 0;
}
