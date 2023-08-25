#include <stdio.h>
int main()
{

    float porcento;
    int numero;
    float total = 0;
    float printa;
    
    

    while(1)
   {
        printf("insira um numero:\n");
        scanf("%d", &numero);
        if( numero <= 0)
        {
        break;
        }

        else
        {
            total ++;

            if (numero > 9 && numero < 21)
            {
                porcento ++;
            }

        }

    }

    printa = (porcento/total) *100;
    printf("numeros entre 10 e 20:\n");
    printf("%.2f %%", printa);
    
    
}