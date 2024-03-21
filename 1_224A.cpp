#include<stdio.h>
#include<math.h>

int main() {
	int x,y,z;
	printf("input dien tich 3 mat cua hinh hop chu nhat:");
	scanf("%d%d%d", &x, &y, &z);
	while (x<=0 || y<=0 || z<=0) {
		printf("Invalid input, try again:");
		scanf("%d%d%d", &x, &y, &z);
	}
	float a,b,c;
	c = (float)pow(z*y/x,0.5);
	b = (float)x/y*c;
	a = (float)y/c;
	float res = (a+b+c)*4;
	printf("result: %.2f", res);
	return 0;
}
