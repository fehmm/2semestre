#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 400000

int main(){

    system("cls");
    int V[TAMANHO];
    for(int i = 0; i < TAMANHO; i++) V[i] = rand();
    for(int i = 0; i < TAMANHO; i++) printf("%d\t", V[i]);

    return 0;

}