#include <stdio.h>
#include <unistd.h> // para usleep()
#include <string.h> // para strlen

void digitar(const char *frase, int delay_microsegundos) {
    for (int i = 0; i < strlen(frase); i++) {
        putchar(frase[i]);    // imprime caractere
        fflush(stdout);       // força a saída imediata no terminal
        usleep(delay_microsegundos); // espera um pouquinho
    }
    putchar('\n'); // pula linha no final da frase
}

int main() {
    system("cls"); // limpa o terminal antes de começar

    const char *letra[] = {
        "There is a house in New Orleans,",
        "They call the Rising Sun,",
        "And it's been the ruin of many a poor boy,",
        "And God, I know I'm one."
    };


    
    int tempo_frases[] = {3000000, 2500000, 4000000, 3000000}; // espera após a frase

    int linhas = sizeof(letra) / sizeof(letra[0]);

    for (int i = 0; i < linhas; i++) {
        digitar(letra[i], 80000); // imprime cada letra com delay de 0.08s
        usleep(tempo_frases[i]);  // espera o tempo da frase antes da próxima
    }

       system ("cls");
    return 0;
}