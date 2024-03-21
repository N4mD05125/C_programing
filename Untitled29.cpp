#include<stdio.h>
#include<math.h>

int main() {
    float a,b;
	printf("nhap khoang 2 so:");
	scanf("%f%f", &a,&b);
	int c = (int)a, d;
	while (a > b) {
		printf("Invalid input");
	}
	if (a==c) {
		d = b - a; 
		printf("%d", d);
	}
	else {
		
		d = b - c;
		printf("%d", d);
	}
    return 0;
}

