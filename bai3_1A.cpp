#include<stdio.h>
#include<math.h>

int main() {
	int n,m,a;
	printf("input kich thuoc(3 so):");
	scanf("%d%d%d", &m,&n,&a);
	while (m<=0 && n<=0 && a<=0) {
		printf("Invalid input, pls try again:");
		scanf("%d%d%d", &m,&n,&a);
	}
	int hcn = m*n, hv = a*a, doc = n/a, ngang = m/a;
	if (m%a!=0) {
		ngang = ngang + 1;
	}
	if (n%a!=0) {
		doc = doc + 1;
	}
	int res = doc*ngang;
	printf("so vien:%d", res);
	return 0;
}
