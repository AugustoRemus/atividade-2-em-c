#include <stdio.h>

int main()
{

    int contador = 0;
    float numero;
    int printar;

    printf("DIgite o numero que voce deseja contar\n");
    scanf("%f", &numero);
    
    while (contador < numero)
    {
        printar = contador + 1;
        
        printf("%d\n",printar);

        if (printar == numero/2)
        {
            printf("metade\n");
        }

        if (printar == (numero/2) - 0.5)
        {
            printf("metade\n");
        }

        contador = contador + 1;
    }

}