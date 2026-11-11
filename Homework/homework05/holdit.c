#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(int argc, char * argv[]) {
    printf("This program will time how long you can hold your breath. Take a deep breath, then press the 'Enter' key. When you absolutely have to exhale, press the enter key again. The duration will be displayed in minutes and seconds.\n");
    printf("Press the 'Enter' key to begin.\n");
    getchar();
    time_t start = time(NULL);
    printf("Press the 'Enter' key when you have to exhale.\n");
    getchar();
    time_t end = time(NULL);
    double duration = (double)(end - start);
    int minutes = (int)duration / 60;
    int seconds = (int)duration % 60;
    printf("You held your breath for %d minutes and %d seconds.\n", minutes, seconds);
    exit(0);
}