#include<stdio.h>
#include<math.h>

int main() {
	int doC;
	printf("input C degree: ");
	scanf("%d", &doC);
	while (doC<=0) {
		printf("phai lon hon hoac bang 0, try again: ");
		scanf("%d", &doC);
	}
	float doF = ((float)doC*9/5)+32;
	printf("nhiet do quy doi la: %.2f", doF);
	return 0;
}

