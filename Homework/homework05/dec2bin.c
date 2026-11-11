#include <stdio.h>
#include <stdlib.h>

void main(int argc, char * argv[]) {
    if (argc != 2) {
        printf("Program must have a single int argument");
        exit(0);
    }

    int i = 0;
    char bitstring[sizeof(unsigned int) * 8];
    unsigned int argument = strtoul(argv[1], NULL, 10);

    while (argument > 0) {
        bitstring[i] = argument % 2;
        argument /= 2;
        i++;
    }

    while (i < sizeof(unsigned int) * 8) {
        bitstring[i] = 0;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bitstring[j]);
    }
    exit(0);
}
