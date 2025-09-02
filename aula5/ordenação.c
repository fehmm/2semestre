#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// implementaçao do algoritimo de orinetaçao

void SelectionSort(int * V, int N);

int main(){

    int vetor[] = {3, 7, 1, 5, 4, 2};
    SelectionSort(vetor, 6);
    for (int i = 0; i < 6; i++) printf("%d\t", vetor[i]);

}

void SelectionSort(int * V, int N) {

    for(int i = 0; i < N - 1; i++){
        int minIndex = i; // indice do menor elemento
        for (int j = i + 1; j < N; j++)    
            if (V[j] < V[minIndex])
               minIndex = j;

    int temp = V[minIndex];
    V[minIndex] = V[i];
    V[i] = temp;

    }    
}