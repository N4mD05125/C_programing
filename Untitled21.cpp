#include<stdio.h>
#include<math.h>

int main() {
	char n;
	printf("input a character:");
	scanf("%c", &n);
	if (n>='0' && n<='9') {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}

