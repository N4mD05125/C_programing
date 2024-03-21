#include<stdio.h>
#include<math.h>

int main() {
	int a,b;
	printf("input 2 numbers: ");
	scanf("%d%d", &a,&b);
	while (a<=0 || b<=0 || a<=b) {
		printf("a va b la so nguyen duong");
		scanf("%d%d", &a,&b);
	}
	int i = 1,s = b;
	label1:
	s = b * i;
	i += 1;
	if (a>s) {
		goto label1;
	}
	else if (a==s) {
		printf("1the answer is: %d", s);
	}
	else if (a<s) {
		s = s - b;
		printf("2the answer is: %d", s);
	}
	
	return 0;
}

