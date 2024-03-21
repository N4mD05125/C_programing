#include<stdio.h>
#include<math.h>

int main() {
	char n;
	printf("input a character:");
	scanf("%c", &n);
	if (n>='A' && n<='Y') {
		n = n + 33;
		printf("%c", n);
	}
	else if (n == 'Z' || n == 'z') {
		printf("a");
	}
	else if (n>='a' && n<='y') {
		n = n + 1;
		printf("%c", n);
	}
	else {
		printf("INVALID");
	}
	return 0;
}

