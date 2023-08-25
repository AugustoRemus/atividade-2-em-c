#include <stdio.h> 
int main()
{
    float totalAlunos =0;
    float totalNotas =0;
    float mediaTurma;

    int matricula = 1;
    float nota;
    float notatotalaluno = 0;
    int contador =1;
    float mediadoaluno;

    while(1)
    {
        printf("insira a matricula:\n");

        scanf("%d", &matricula);
        
        if(matricula == 0)
        {
            break;
        }

        totalAlunos ++;
        while (contador<11)
        {
            printf("insira a nota %d: ", contador);
            scanf("%f", &nota);
            notatotalaluno = notatotalaluno + nota;
            //printf("%f", notatotalaluno);
            contador ++;

        }
        
        contador = 1;
        mediadoaluno = notatotalaluno/10;
        totalNotas = totalNotas + mediadoaluno ;

        printf("matricula: %d, media: %.1f \n", matricula, mediadoaluno);
        notatotalaluno = 0;
   
    }
    mediaTurma = totalNotas/totalAlunos;
    printf("media da turma = %.2f", mediaTurma);
    
}