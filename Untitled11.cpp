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
	long long sn = x*(x+1);
	printf("result: %lld", sn);
	return 0;
}

