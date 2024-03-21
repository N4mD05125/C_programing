#include <stdio.h>
#include <string.h>
char str[10000];
int countcharacters(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++; 
    }
    return count;
}
int main() {
    scanf(" %[^\n]s", str); 
    int charac = countcharacters(str);
    printf("%d", charac);
    return 0;
}
