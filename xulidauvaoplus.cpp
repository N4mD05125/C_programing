#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[50][50];
    int numbers[50];
    int num_inputs;

    printf("Enter the number of inputs: ");
    scanf("%d", &num_inputs);
    printf("Enter %d inputs:\n", num_inputs);


    for (int i = 0; i < num_inputs; i++) {
        printf("Input %d: ", i + 1);
        scanf("%s", input[i]);
    }

    for (int i = 0; i < num_inputs; i++) {
        char *endptr;
        numbers[i] = strtol(input[i], &endptr, 10);

        if (*endptr != '\0') {
            printf("Input %d is not a number\n", i + 1);
        }
    }

    printf("Numbers:\n");
    for (int i = 0; i < num_inputs; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}

