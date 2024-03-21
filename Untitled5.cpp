#include<stdio.h>
#include<math.h>

int main() {
	int a;
	printf("input the number: ");
	scanf("%d", &a);
	while (a<=0) {
		printf("try again: ");
		scanf("%d", &a);
	}
	float chuvi = a*2*3.14;
	float dientich = a*a*3.14;
	printf("chu vi va dien tich la: %.2f %.2f", chuvi, dientich);
	return 0;
}

