#include<stdio.h>
#include<math.h>

int main() {
	char n;
	printf("input a character:");
	scanf("%c", &n);
	if (n>='a' && n<='z') {
		n = n - 32;
		printf("%c", n);
	}
	else {
		printf("%c", n);
	}
	return 0;
}

