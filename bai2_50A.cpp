#include<stdio.h>
#include<math.h>

int main() {
	int m,n;
	printf("input chieu dai va chieu rong cua hinh chu nhat:");
	scanf("%d%d", &m,&n);
	while (m<=0 && n<=0 && m>16 && n>16) {
		printf("invalid input, pls try again:");
		scanf("%d%d", &m, &n);
	}
	int dientich = m*n, soluong = dientich/2;
	printf("so luong: %d", soluong);
	
	return 0;
}
