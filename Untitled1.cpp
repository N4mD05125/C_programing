#include<stdio.h>
#include<math.h>

int main() {
	int a,b;
	printf("input something: ");
	scanf("%d%d", &a, &b);
	while(a==0 || b==0) {
		printf("invalid input, try again:");
		scanf("%d%d", &a, &b);
	}
	
	int c=a/b;
	int d=a%b;
	printf("%d %d", c, d);
	return 0;
}
