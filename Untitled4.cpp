#include<stdio.h>
#include<math.h>

int main() {
	int a,b;
	printf("input 2 numbers: ");
	scanf("%d%d", &a, &b);
	while (a==0 || b==0) {
		printf("invalid input, pls try again: ");
		scanf("%d%d", &a, &b);
	}
	int tong = a+b;
	int hieu = a-b;
	long long tich = (long long)a*b;
	float thuong = (float)a/b;
	printf("result: %d %d %lld %.2f", tong, hieu, tich, thuong);
	return 0;
}

