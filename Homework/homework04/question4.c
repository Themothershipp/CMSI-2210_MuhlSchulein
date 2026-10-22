#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char * argv[]) {
    if (argc > 1) {
        printf("Syntax Error: No aditional arguments allowed\n");
        exit(0);
    }
    const int MAX;
    printf("What is the maximum integer? Must be an integer greater than 0.\nInput: ");
    scanf("%d", &MAX);
    if (MAX < 1){
        printf("\nInvalid Argument: Must be a number greater than 0\n");
        exit(0);
    }
    else {
        printf("\nStart of program:\n\n");
    }
    for (int i = 1; i <= MAX; i++) {
        if (i % 3 == 0) {
            if (i % 5 == 0){
                printf("fizz-buzz\n");
            }
            else {
                printf("fizz\n");
            }
        }
        else if (i % 5 == 0) {
            printf("buzz\n");
        }
        else {
            printf("%d\n", i);
        }
    }
    exit(0);
}