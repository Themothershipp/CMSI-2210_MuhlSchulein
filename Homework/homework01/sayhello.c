/*
Author: Joseph Muhl and Cole Schulein
Data: 09/03/2026
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    char name[500];

    printf("What is your name?\n");

    scanf("%499s", name);

    printf("Hello %s!", name);

    return 0;
}