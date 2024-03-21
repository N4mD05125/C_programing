#include<stdio.h>
#include<math.h>

int main() {
	int n,s,i=1;
	printf("input 2 so:");
	scanf("%d%d", &n,&s);
	if (s<=n) {
		printf("result: 1");
	}
	while (s>n) {
		s = s - n;
		i = i+1;
	}
	if (i!=1) {
		printf("result: %d", i);
	}
	return 0;
}
