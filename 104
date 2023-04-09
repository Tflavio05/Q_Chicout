#include <stdio.h>

/*
Ainda no contexto do exercício anterior, suponha que o usuário forneceu 
um vetor de 100 posições no qual cada posição corresponde à velocidade 
máxima em m/s na qual um veículo pode se deslocar em um determinado 
quarteirão (100 m). Com base neste vetor e no vetor fornecido no exercício 
anterior, calcular e mostrar:
a. Em quantos quarteirões o veículo excedeu o limite de velocidade até 
20%
b. Em quantos quarteirões o veículo excedeu o limite de velocidade acima 
de 20%.
c. O valor final devido em multas, considerando que existe um radar capaz 
de emitir uma multa a cada quarteirão, que a multa para excessos até 20% 
é de R$ 200,00, que a multa para excessos acima de 20% é de R$ 300,00, 
e que cada multa reincidente sofre um acréscimo de 50% em relação ao 
seu valor básico.

*/


#define TAM 100 // define a constante TAM como sendo 100

int main() {
    float velocidades[TAM];
    int i, quarteiroes_excedidos_20 = 0, quarteiroes_excedidos_30 = 0;
    float valor_total_multas = 0;

    // Lê as velocidades fornecidas pelo usuário
    printf("Informe as velocidades maximas permitidas em cada quarteirao (em m/s):\n");
    for(i = 0; i < TAM; i++) {
        scanf("%f", &velocidades[i]);
    }

    // Verifica quantos quarteirões o veículo excedeu o limite de velocidade em acima de 20%
    for(i = 0; i < TAM; i++) {
        float limite_20 = velocidades[i] * 1.2; // limite de velocidade com acréscimo de 20%
        float limite_30 = velocidades[i] * 1.3; // limite de velocidade com acréscimo de 30%
        if(limite_20 < 27.78 && limite_30 < 33.33) { // limite de velocidade de 100 m em 20/30 segundos (100/20 = 5 m/s = 18 km/h = 5.56 m/s; 100/30 = 3.33 m/s = 12 km/h = 3.75 m/s)
            if(velocidades[i] > limite_20) {
                quarteiroes_excedidos_20++;
                if(quarteiroes_excedidos_20 == 1) {
                    valor_total_multas += 200.0; // primeira multa por excesso até 20%
                } else {
                    valor_total_multas += 200.0 * 1.5; // multa reincidente por excesso até 20%
                }
            }
            if(velocidades[i] > limite_30) {
                quarteiroes_excedidos_30++;
                if(quarteiroes_excedidos_30 == 1) {
                    valor_total_multas += 300.0; // primeira multa por excesso acima de 20%
                } else {
                    valor_total_multas += 300.0 * 1.5; // multa reincidente por excesso acima de 20%
                }
            }
        }
    }

    // Imprime o resultado
    printf("O veiculo excedeu o limite de velocidade acima de 20%% em %d quarteiroes.\n", quarteiroes_excedidos_20);
    printf("O veiculo excedeu o limite de velocidade acima de 30%% em %d quarteiroes.\n", quarteiroes_excedidos_30);
    printf("Multas: %d", valor_total_multas);
}
