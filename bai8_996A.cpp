#include<stdio.h>
#include<math.h>

int main() {
	int n,i;
	printf("input a number:");
	scanf("%d", &n);
	if (n!=0) {
		while (n>=100) {
			n = n - 100;
			i++;
		}
		while (n>=20 && n<100) {
			n = n - 20;
			i++;
		}
		while (n<20 && n>=10) {
			n=n-10;
			i++;
		}
		while (n<10 && n>=5) {
			n=n-5;
			i++;
		}
		while (n<5 && n>=1) {
			n = n - 1;
			i++;
		}
	}
	printf("result: %d", i);
	return 0;
}
