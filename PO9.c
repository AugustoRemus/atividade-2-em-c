#include<stdio.h> // nao consegui, isso foi o maximo

int main()
{
    int timeA = 0;
    int timeB = 0;
    int timeC = 0;
    int timeD = 0;
   

    char primeiroTime;
    int gols1;

    char segundoTime;
    int gols2;

    char capeao;
    
    while(1)
    {
        printf("insira o primeiro time:\n");
        scanf("%c", &primeiroTime);

        if(primeiroTime != 'A'|| primeiroTime != 'B' || primeiroTime != 'C' || primeiroTime != 'D')
        {
            break;
        }
        
        printf("insira o numero de gols do time %c\n", primeiroTime);
        scanf("%d", &gols1);

        printf("ok\n");

        printf("agora digite o segundo time:\n");
        scanf("%c", &segundoTime);

        if(segundoTime != 'A'|| segundoTime != 'B' || segundoTime != 'C' || segundoTime != 'D')
        {
            break;
        }

         printf("insira o numero de gols do time %c\n", segundoTime);
         scanf("%d", &gols2);

         if(gols1 > gols2)
         {
            if (primeiroTime == 'A')
            {
                timeA = timeA + 3;
            }
            else
            {
                if (primeiroTime == 'B')
                {
                    timeB = timeB +3;
                }
                else
                {
                    if(primeiroTime == 'C')
                    {
                        timeC = timeC +3;
                    }
                    else
                    {
                        timeD = timeD +3;
                    }
                }
            }
         }
         else
         {
            if(gols1 < gols2)
            {
                if (segundoTime == 'A')
                {
                    timeA = timeA + 3;
                }
                else
                {
                    if (segundoTime == 'B')
                    {
                        timeB = timeB +3;
                    }
                    else
                    {
                        if(segundoTime == 'C')
                        {
                            timeC = timeC +3;
                        }
                        else
                        {
                            timeD = timeD +3;
                        }
                    }
                }
            
            }
            else{
            if(gols1 == gols2)
            {
                
                if (segundoTime == 'A' || primeiroTime == 'A')
                {
                    timeA = timeA + 1;
                }
                
                
                if (segundoTime == 'B' || primeiroTime == 'B')
                {
                    timeB = timeB +1;
                }
                
                    
                if(segundoTime == 'C' || primeiroTime == "C")
                {
                    timeC = timeC +1;
                }
                if(segundoTime == 'D' || primeiroTime == 'D')
                {
                    timeD = timeD +1;
                }
            }
                    
                
            
            }
        }




        
    }
}