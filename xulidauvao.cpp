#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[50];
    int number;

    printf("input something:");
    scanf("%s", input);

    char *endptr;
    number = strtol(input, &endptr, 10);

    if (*endptr == NULL) {
        printf("number: %d", number);
    } else {
        printf("Not a number\n");
    }

    return 0;
}

