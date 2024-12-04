/*
Nome..: Francisco Pereira Junior
Turma.: AS61B-N11
Data..: 02/12/2024
Enunciado.: Manipulação de vetores. Receber; mostrar na mesma ordem; mostrar 
em ordem inversa.
*/

#include <stdio.h>
#define TAM 5

int main() {
    int vetor[TAM],     // vetor de tamanho 5
        ind = 0;

    // primeira posição do vetor é 0 (zero)
    // última posição é o tamanho - 1
    // recebendo valores para um vetor
    for(ind = 0; ind < TAM; ind++) {
        scanf("%d", &vetor[ind]); 
    }
    
    // mostrando os valores armazenados no vetor
    printf("\n..:: mostrando na ordem de recebimento ::..\n");
    for(ind = 0; ind < TAM; ind++) {
        printf("%d - ", vetor[ind]); 
    }
    
    printf("\n..:: mostrando na ordem inversa ao recebimento ::..\n");
    for(ind = TAM - 1; ind >= 0; ind--) { 
        printf("%d - ", vetor[ind]); 
    }

    return 0;
}
