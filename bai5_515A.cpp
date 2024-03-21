#include<stdio.h>
#include<math.h>

int main() {
	int a,b,s;
	printf("input toa do va so buoc:");
	scanf("%d%d%d",&a,&b,&s);
	int n = abs(a) + abs(b);
	if (s>=n && (s-n)%2==0) {
		printf("YES");
	} 
	else {
		printf("NO");
	}
	return 0;
}
