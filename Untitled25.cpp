#include<stdio.h>
#include<math.h>

int main() {
	int a,b,c;
	printf("input 3 canh cua 1 tam giac:");
	scanf("%d%d%d", &a,&b,&c);
	if ((a+b>c) && (a+c>b) && (b+c>a)) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}

