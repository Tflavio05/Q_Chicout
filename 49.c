#include <stdio.h>
#include <math.h>
/*. 
Escreva uma função que arredonda um valor dado. O número deve ser 
arredondado para o inteiro mais próximo. Se o número for equidistante de dois 
inteiros, deve ser arredondado para o valor de maior magnitude. Ou seja, 1.5 é 
arredondado para 2, e -1.5 é arredondado para -2. O protótipo da função deve 
ser:
a. int arredonda (double x);
*/

int arredonda(double x)
{ 
    printf("Digite um numero: ");
    scanf("%lf", &x);
    
    return (int)(x + 0.5); 
}

int main()
{   
    double x, n;
    x = arredonda(n);
    
    printf("%lf", x);
    
}
