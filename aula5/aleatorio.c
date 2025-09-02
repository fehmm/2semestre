#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 400

int main(){

    system("cls");

    int soma = 0;

    srand(time(NULL));
     clock_t t0 = clock();
   
    for(int i = 0; i < TAMANHO; i++) {
        int temp= rand() % 1000;
        printf("%d\n", temp);
        soma = soma + temp
    }
 

    for(int i = 0; i < TAMANHO; i++) printf("%d\t", V[i]);

     clock_t tf = clock();

     double TempoCPU = (double(tf - t0) / CLOCKS_PER_SEC);
     printf("tempo de cpu : %.3f segundos", TempoCPU)

    return 0;

}