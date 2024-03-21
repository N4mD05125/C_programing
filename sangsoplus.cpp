#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a[1000001];
void check() {
	for (int i=0;i<=1000000;i++) {
		a[i]=1;
	}
	a[0] = a[1] = 0;
	for (int i=2;i<=1000;i++) {
		if (a[i]) {
			for (int j=i*i;j<=1000000; j+=i){
				a[j] = 0;
			}
 		}
	}
} 


int main() {
	check();
	int n;
	printf("input so:");
	scanf("%d", &n);
	for (int i=0;i<=n;i++) {
		if(a[i]) 
			printf("%d ", i);
	}
	
	
	return 0;
}
