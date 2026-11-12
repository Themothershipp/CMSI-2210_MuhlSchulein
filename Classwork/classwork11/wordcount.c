#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    if (argc != 2){
        printf("Wrong number of arguments\n");
        return 1;
    }

    FILE *pointer = fopen(argv[1], "r");
    if (pointer == NULL){
        printf("File doesn't exist or can't be accessed\n");

        return 1;
    }
    int count = 0;
    char word[100];

    while (fscanf(pointer, "%99s", word) == 1) {
        count++;
    }

    if (ferror(pointer)) {
        perror("Error reading file");
        fclose(pointer);
        return 1;
}

    fclose(pointer);
    printf("%d\n", count);
    return 0;
}