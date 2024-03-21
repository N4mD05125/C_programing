#include<stdio.h>
#include<math.h>

int main() {
    long long a,b,c;
    printf("input 3 so:");
    scanf("%lld%lld%lld", &a,&b,&c);
    if (a/b==c || b/c==a || c/a==b) {
    	printf("/");
	}
	else {
		printf("NOSOL");
	}
    return 0;
}

