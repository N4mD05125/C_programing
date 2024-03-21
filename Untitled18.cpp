#include<stdio.h>
#include<math.h>

int main() {
	char n;
	printf("input a character:");
	scanf("%c", &n);
	if (n>='a' && n<='z') {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}

