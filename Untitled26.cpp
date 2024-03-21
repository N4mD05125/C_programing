#include<stdio.h>
#include<math.h>

int main() {
	int a,b,c;
	printf("input 3 canh cua 1 tam giac:");
	scanf("%d%d%d", &a,&b,&c);
	if ((a+b>c) && (a+c>b) && (b+c>a)) {
		if (a==b && b==c) {
			printf("1");
		}
		else if (a==b || b==c || c==a) {
			printf("2");
		}
		else if ((pow(a,2)+pow(b,2)==pow(c,2)) || (pow(b,2)+pow(c,2)==pow(a,2)) || (pow(a,2)+pow(c,2)==pow(b,2))){
			printf("3");
		}
		else {
			printf("4");
		}
			
	}
	else {
		printf("INVALID");
	}
	return 0;
}

