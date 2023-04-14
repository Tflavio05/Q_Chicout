#include <stdio.h>

/*Elabore uma função que receba duas strings como parâmetros e
verifique se a segunda string ocorre dentro da primeira. Use aritmética de
ponteiros para acessar os caracteres das strings.*/

int verificaSubstring(char *str1, char *str2) {
    while (*str1 != '\0') { // enquanto não chegar ao fim da string 1
        char *p1 = str1;
        char *p2 = str2;
        
        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) { // enquanto não chegar ao fim de nenhuma das strings e os caracteres forem iguais
            p1++; // avança para o próximo caractere da string 1
            p2++; // avança para o próximo caractere da string 2
        }
        
        if (*p2 == '\0') { // se a string 2 chegou ao fim, isso significa que encontramos uma substring
            return 1;
        }
        
        str1++; // avança para o próximo caractere da string 1
    }
    
    return 0; // se chegamos aqui, significa que não encontramos uma substring
}

int main() {
    char str1[100], str2[100];
    
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    
    printf("Digite a segunda string: ");
    scanf("%s", str2);
    
    if (verificaSubstring(str1, str2)) {
        printf("'%s' ocorre dentro de '%s'.\n", str2, str1);
    } else {
        printf("'%s' não ocorre dentro de '%s'.\n", str2, str1);
    }
    
    return 0;
}
