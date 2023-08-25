#include <stdio.h>
int main()
{

    int numero;
    int total = 0;
    int contador = 1;

    printf("insira o numero q deseja\n");
    scanf("%d", &numero);

    while(contador<numero+1)
    {

        total = total + contador;
        contador ++;
        
    }

    printf("%d", total);
}