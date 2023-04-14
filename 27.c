#include <stdio.h>
#include <time.h>

int main()
{  /* Fazer um programa para medir os reflexos do usuário. O programa deve: 
a. Mostrar a palavra “Agora!” após um tempo aleatório e um número, também aleatório 
b. Medir o tempo até que o usuário digite o número pedido e mostrar esse tempo. 
Dica: usar a função clock da biblioteca time.h (verificar exemplos na internet ou pedir ao professor) */
    
    float tempo;
    clock_t start, end;
    int i, j, n, k;

    n = rand()%99;
    
    printf("Seu numero é: %d\n ", n);
    
    
    for (i = 0; i < 50000; i++) {
        
        for (j = 0; j < 50000; j++);
        
    }
    
    start = time(NULL);
    printf("AGORA! ");
    while (k != n) {
        scanf("%d", &k);
        printf("AGORA! "); } 
    end = time(NULL);
    tempo = difftime(end, start);
    printf("voce demorou: %f segundos.", tempo);
    
    return 0;
    
}
