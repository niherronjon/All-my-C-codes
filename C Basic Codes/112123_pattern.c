#include <stdio.h>

int main() {
    int n = 1;
    int row, col;

    for (row = 1; row <= 4; row++) {
        for (col = 1; col <= row; col++) {
            printf("%d", n);
            n++;
        }
        printf("\n");
    }

    return 0;
}
