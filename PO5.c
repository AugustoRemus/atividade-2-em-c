#include <stdio.h>

int main()
{

    int numero;
    int contador = 1;
    int total = 1;

    printf("insira o numero desejado:\n");
    scanf("%d", &numero);

    while (contador<=numero)
    {
        total = total * contador;
        contador ++;
    }
    printf("%d", total);

}