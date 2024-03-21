#include<stdio.h>
#include<math.h>

int main() {
	int a,b,c;
	printf("input 3 numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	int result = a * (b + c) + b * (a + c);
	printf("result: %d", result);
	return 0;
}

