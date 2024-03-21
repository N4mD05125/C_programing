#include<stdio.h>
#include<math.h>

int main() {
	int x;
	printf("input x: ");
	scanf("%d", &x);
	while(x < 0) {
		printf("error, pls try again: ");
		scanf("%d", &x);
	}
	int result = pow(x-1,0.5);
	printf("%d", result);
	return 0;
}

