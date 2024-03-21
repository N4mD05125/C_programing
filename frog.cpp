#include<stdio.h>
#include<math.h>

int main() {
	int a,b,k,res;
	printf("input 3 so:");
	scanf("%d%d%d", &a,&b,&k);
	for (int i=1;i<=k;i++) {
		if (i%2==1) {
			res = res + a;
		}
		else {
			res = res - b;
		}
	}
	printf("result: %d", res);
	return 0;
}
