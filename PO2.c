#include <stdio.h>
int main()
{

    int primeiroNumero;
    int segundoNumero;
    int total;
    int contador = 0;

    printf("informe o primeiro numero\n");
    scanf("%d", &primeiroNumero);
    printf("informe o segundo numero\n");
    scanf("%d", &segundoNumero);

    while(contador < primeiroNumero)
    {

        total = total + segundoNumero;
        contador ++;

    }

    printf("%d", total);
}