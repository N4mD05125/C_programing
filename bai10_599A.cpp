#include<stdio.h>
#include<math.h>

int main() {
	int a,b,c;
	printf("input 3 numbers:");
	scanf("%d%d%d", &a,&b,&c);
	int res1 = a+b+c, res2 = (a+b)*2, res3 = (a+c)*2, res4 = (b+c)*2;
	int min = res1;
	if (min>res2) min = res2;
	if (min>res3) min = res3;
	if (min>res4) min = res4;
	printf("result: %d", min);
 	return 0;
}
