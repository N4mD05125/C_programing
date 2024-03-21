#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int len=strlen(str);
    char *left=str;
    char *right=str+len-1;
    while (left<right){
        char t=*left;
        *left=*right;
        *right=t;
        left++;
        right--;
    }
}
int main() {
    char str[100000];
    printf("Nhap xau: ");
    scanf(" %[^\n]s", str);
    reverse(str);
    printf("Xau moi %s",str);
    return 0;
}
