#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int n, i, j, mi, ci;
	printf("so vong choi:");
	scanf("%d", &n);
	while (n<1 && n>1000) {
		printf("invalid input");
		scanf("%d", &n);
	} 
	int a[n][1];
	for (i=0; i<n; i++) {
		scanf("%d%d", &a[i][0], &a[i][1]);
	}
	
	for (i=0; i<n; i++) {
		if (a[n][0] > a[n][1]) {
			mi++;
		}
		else if (a[n][0] < a[n][1]) {
			ci++;
		}
		else {
			continue;
		}
	}
	if (mi>ci) {
		printf("Mi win");
	}
	else if (mi<ci) {
		printf("Ci win");
	}
	else {
		printf("tie");
	}
	return 0;
} 
/*
a[0][0] a[0][1]
a[1][0] a[1][1]
a[2][0] a[2][1]
a[3][0] a[3][1]
*/
