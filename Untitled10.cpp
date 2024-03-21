#include<stdio.h>
#include<math.h>

int main() {
	int x;
	printf("input the number: ");
	scanf("%d", &x);
	while (x<0) {
		printf("x la so nguyen khong am");
		scanf("%d", &x);
	}
	float sn= (float)x/(x+1);
	printf("result: %.2f", sn);
	return 0;
}

