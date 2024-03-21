#include<stdio.h>
#include<math.h>

long long fibo[10000000000], fibo[10000000000]

void dayfibo(){
    fibo[2] = 1;
    fibo[1] = 1;
    fibo1[1] = 1;
    fibo1[2] = 2;
    for(long long i=3;i<1000000000000000000;i++){
        fibo[i] = (fibo[i-1]%1000000007+fibo[i-2]%1000000007)%1000000007;
        fibo1[i] = ((fibo[i-1]%1000000007)+(fibo1[i-1]%1000000007))%1000000007;
    }
}

int main(){
    long long n;
    scanf("%lld",&n);
    dayfibo();
    printf("%lld\n", result);
    return 0;
}