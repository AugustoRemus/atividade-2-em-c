#include <stdio.h>
int main()
{

    char operacao;
    int verificador = 1;
    float numeroUm;
    float numeroDois;
    float printar;

    while (1)
    {

        printf("insira a operação desejada\n");
        scanf("%c", &operacao);

        

        if (operacao == "@")
        {

            printf("fechando programa");
            break;

        }
        else
        {

            printf("insira o primeiro numero\n");
            scanf("%f", &numeroUm);

            printf("insira o segundo numero\n");
            scanf("%f", &numeroDois);

            if (operacao == "+")
            {
                printar = numeroDois + numeroUm;
                printf("%0.f", printar);
            }

        }
    }


}