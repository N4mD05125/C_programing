#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower = 5, upper = 50, num;
    
    srand(time(0));
    
    num = (rand() % (upper - lower + 1)) + lower;
    printf("%d\n", num);
    
    return 0;
}
