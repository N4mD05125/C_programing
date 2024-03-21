#include <stdio.h>
#include <string.h>

int main() {
    char num[1002]; 
    scanf("%s", num);
    int sum=0;
    for (int i=0; num[i]!='\0'; ++i) {
        if (num[i] == '\0') {
            sum=num[i-1]-'0'; 
        }
    }
    printf("%d",sum);
    return 0;
}


