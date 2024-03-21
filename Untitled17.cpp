#include<stdio.h>
#include<math.h>

int main() {
	int a,b;
	printf("input month and year:");
	scanf("%d%d", &a,&b);
	while (b<=0) {
		printf("INVALID");
		scanf("%d", &a, &b);
	}
	switch(a) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("31");
			break;
		case 4: case 6: case 9: case 11:
			printf("30");
			break;
		case 2:
			if (b%400==0 || (b%4==0 && b%100!=0)) {
				printf("29");
				break;
			}
			else {
				printf("28");
				break;
			}
		default:
			printf("INVALID");
	}
	
	return 0;
}

