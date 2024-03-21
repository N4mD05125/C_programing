#include<stdio.h>
#include<math.h>

int main() {
	long long x;
	printf("input the number: ");
	scanf("%lld", &x);
	while (x<0) {
		printf("x la so nguyen khong am");
		scanf("%lld", &x);
	}
	long long sn=0, i;
	for (i=0; i<=x; i++) {
		sn = sn + pow(-1,i) * i;
	}
	printf("result: %lld", sn);
	return 0;
}

