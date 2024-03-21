#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
	int i,a,b,j,count=0, sum = 0;
	scanf("%d%d", &a,&b);
	for (i=a; i<=b; i++) {
		sum = 1;
		for (j=2; j<=i/2; j++) {
			
			if (i%j==0) {
				sum = sum + j;
				if (sum>i) {
					count++;
					break;
				}
			}
		}
	}
	printf("%d", count);
	return 0;
}
