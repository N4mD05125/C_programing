#include<stdio.h>
#include<math.h>

int main() {
    long long a,b,c,d,e,num1,num2;
    printf("input 5 so:");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    while (a==b || b==c || c==d || d==e || e==a || a==c || a==d || b==d || b==e || c==e) {
    	printf("cac so nguyen doi 1 khac nhau");
    	scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
	}
    num1=a;
    num2=b;
	if (num1 < num2) {
		num1=num1-num2;
		num2=num1+num2;
		num1=num2-num1;
	}
	if (c>num2) {
		if (c>num1) {
			num2=num1;
			num1=c;
		}
		else {
			num2 = c;
		}
	}
	if (d>num2) {
		if (d>num1) {
			num2=num1;
			num1=d;
		}
		else {
			num2 = d;
		}
	}
	if (e>num2) {
		if (e>num1) {
			num2=num1;
			num1=e;
		}
		else {
			num2 = e;
		}
	}
	printf("so lon thu 2: %d", num2);
    return 0;
}

