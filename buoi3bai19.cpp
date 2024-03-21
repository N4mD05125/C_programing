#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>

int main() {
	int n,t,i,j = 0, a[10000];
	printf("input 2 so:");
	scanf("%d%d", &n,&t);
	int min = pow(10,n-1),max = pow(10,n) - 1;
	for (i=min;i <= max;i++) {
		if (i%t==0) {
			j++;
			a[j] = i;
		} 
	}
	if (j==0) {
		printf("-1");
	} 
	else {
		srand(time(0));
		int randomnumber = (rand() % (j+1))+1;
		printf("result: %d", a[randomnumber]); 
	}
	
	return 0;
}
