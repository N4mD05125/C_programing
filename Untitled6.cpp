#include<stdio.h>
#include<math.h>

int main() {
	float a,b,c,d;
	printf("nhap 2 diem toa do: ");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	float x = pow(a-c,2), y = pow(b-d,2);
	float result = pow(x+y,0.5);
	printf("khoang cach: %.2f", result);
	return 0;
}

