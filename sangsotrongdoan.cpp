#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int prime[1000001];
//prime[i]
void check() {
	prime[0] = prime[1] = 0;
	for (int i = 2; i<=100001; i++) {
		prime[i] = 1;
	}
	for (int i=2;i<=100001;i++) {
		if (prime[i]) {
			for (int j=i*i;j<=1000000; j+=i){
				prime[j] = 0;
			}
 		}
	}
}


int main() {
	int a,b;
	check();
	printf("nhap 2 so:");
	scanf("%d%d", &a,&b);
	for (int i = a;i<=b;i++) {
		if(prime[i]) {
			printf("%d ", i);
		}
	}
	
	return 0;
}
