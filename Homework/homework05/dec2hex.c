//to hex
#include <stdio.h>
#include <stdlib.h>

void main(int argc, char * argv[]) {
    if (argc < 2 || argc > 3) {
        printf("Program must have an int argument and optional number of digits (8 or 16)");
        exit(0);
    }

    int i = 0;
    char hex[100];
    //Doesn't work
    unsigned long argument = strtoul(argv[1], NULL, 10);

    if (argc == 3) {
    }

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
