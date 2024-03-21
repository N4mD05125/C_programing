#include<stdio.h>
#include<math.h>

int main() {
	int ucln,bcnn,a,b,n,i;
	printf("input 2 so:");
	scanf("%d%d", &a,&b);
	if (a>b) {
		a=a-b;
		b=a+b;
		a=b-a;
	}
	for (i=1; i<=a; i++) {
		if (a%i==0 && b%i==0) {
			ucln=i;
		}
	}
	printf("UCLN: %d", ucln);
	for (i=1; i>0; i++) {
		n = a*i;
		if (n%b == 0) {
			bcnn = n;
			break;
		}
	}
	printf("\nBCNN: %d", bcnn);
	return 0;
}
