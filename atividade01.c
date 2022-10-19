#include <stdio.h>
#include <string.h>

int main(){

    char palavra1[50] = {"Casa"}; 
    char palavra2[50] = {"Moradia"};

    printf("Antes:\npalavra 1: %s\npalavra2: %s\n", &palavra1, &palavra2);

    strcpy(palavra2, palavra1);

    printf("\nDepois:\npalavra 1: %s\npalavra2: %s\n", &palavra1, &palavra2);

    return 0;
}
