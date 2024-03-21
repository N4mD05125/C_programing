#include<stdio.h>
#include<math.h>

int main() {
	int k,w,n,tongtien;
	printf("so tien qua chuoi dau tien, so tien co, so chuoi can mua:");
	scanf("%d%d%d", &k,&n,&w);
	for (int i=1;i<=w;i++) {
		tongtien = i*k + tongtien;
	}
	tongtien = tongtien-n;
	printf("result: %d", tongtien);
	return 0;
}
