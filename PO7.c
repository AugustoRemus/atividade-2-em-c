#include <stdio.h>
int main()
{
    float filhosTotal = 0;
    float salariosTotal = 0;

    float total =0;

    float printa;
    float printb;

    float salario;
    float filho;

    while(1)
    {
        printf("insira o seu salario:\n");
        scanf("%f", &salario);
        if (salario < 0)
        {
            break;
        }
        else
        {
            total++;
            salariosTotal = salariosTotal + salario;
            printf("insira o numero de filhos:\n");
            scanf("%f", &filho);
            filhosTotal = filhosTotal + filho;
        }
    }
    printf("media de salario:\n");
    printa = salariosTotal/total;
    printf("%.2f\n", printa);
    printf("media de filhos\n");
    printb = filhosTotal/total;
    printf("%.1f\n", printb);
}