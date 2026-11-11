#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char * argv[]) {
    if (argc < 2 || argc > 3) {
        printf("Program must have an int argument and optional number of digits (8 or 16)");
        exit(0);
    }

    int i = 0;
    char hex[100];
    unsigned long argument = strtoul(argv[1], NULL, 10);

    while (argument > 0) {
        int remainder = argument % 16;
        if (remainder < 10) {
            hex[i] = remainder + '0';
        } else {
            hex[i] = remainder - 10 + 'A';
        }
        argument /= 16;
        i++;
    }

    if (argc == 3 && strcmp(argv[2], "16") == 0) {
        while (i < 16) {
            hex[i] = '0';
            i++;
        }
    } else {
        if (argc == 3 && strcmp(argv[2], "8") != 0) {
            printf("Invalid number of digits. Must be 8 or 16. Assuming 8 digits.\n");
        }
        if (i > 8) {
            printf("Warning: The number is too large to fit in 8 digits. Truncating to last 8 digits.\n");
            i = 8;
        }
        while (i < 8) {
            hex[i] = '0';
            i++;
        }
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    exit(0);
}
