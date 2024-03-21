#include<stdio.h>
#include<math.h>

int main() {
	int n;
	printf("input a year:");
	scanf("%d", &n);
	while (n<=0) {
		printf("pls input again:");
		scanf("%d", &n);
	}
	if (n%400==0 || (n%4==0 && n%100!=0)){
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}

