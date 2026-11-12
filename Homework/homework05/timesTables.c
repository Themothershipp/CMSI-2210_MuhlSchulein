#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if (argc != 2) {
        printf("incorrect number of arguments");
        return 1;
    }
    int n;
    if (sscanf(argv[1], "%d", &n) != 1 || n < 2) {
        printf("Invalid input\n");
        return 1;
    }

    int width = 1;
    for (int largest = (int)n * n; largest >= 10; largest /= 10) {
        width++;
    }
    printf("| %*s ", width, "x");
    for (int column = 2; column <= n; column++) {
        printf("| %*d ", width, column);
    }
    printf("|\n");

    for (int row = 2; row <= n; row++) {
        printf("| %*d ", width, row);
        for (int column = 2; column <= n; column++) {
            printf("| %*d ", width, (int)row * column);
        }
        printf("|\n");
    }
    return 0;
}