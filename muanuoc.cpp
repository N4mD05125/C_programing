#include<stdio.h>
#include<math.h>

int main() {
	long long n,a,b;
	printf("input 3 numbers:");
	scanf("%lld%lld%lld", &n,&a,&b);
	if (a>b) {
		a=a-b;
		b=a+b;
		a=b-a;
	} 
	long long res = a*n;
	printf("result: %lld", res);
	return 0;
}
