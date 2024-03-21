#include<stdio.h>

#define Sochia 1000000007

long long dayfibo(long long n){
    if (n <= 1)
        return n;
    long long a=0,b=1,c;
    for (long long i=2; i<=n; i++) {
        c = (a+b)%Sochia;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    long long n;
    scanf("%lld", &n);
    long long result = dayfibo(n);
    printf("%lld\n", result);
    return 0;
}
