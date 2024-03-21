#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//a[0][0] = 1

//a[1][0] = 1
//a[1][1] = 1

//a[2][0] = 1
//a[2][1] = 2
//a[2][2] = 1

//a[3][0] = 1
//a[3][1] = 3
//a[3][2] = 3
//a[3][3] = 1

/*a[4][0]=1
a[4][1]=4
a[4][2]=6
a[4][3]=4
a[4][4]=1*/
//a[i][j]

int main() {
    int n, i, j;
    printf("input:");
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == j) { 
                a[i][j] = 1;
            }
            else {
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
            }
        }
    }
    int b, c;
    for (c = 0; c < n; c++) {
        for (b = 0; b <= c; b++) { 
            printf("%d ", a[c][b]);
        }
        printf("\n");
    }

    return 0;
}

