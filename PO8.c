#include <stdio.h>
int main()
{
    int antonio = 150;
    int carlos = 110;

    int anos = 0;

    while(antonio > carlos)
    {
        carlos = carlos + 1;
        anos = anos + 1;
        

        if (antonio == carlos)
        {
            break;
        }
        
        
        
    }

    printf("vai demorar %d anos", anos);
}