
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void norep(int num[6]);
int sorteio();
void imprime(int num[6]);

int main()
{
    int  num[6];
    srand( time(NULL));

    printf("tabela com os numero sem repeticao de 1 a 6\n");
    printf("a tabela se repetira por 100 vezes\n\n");

    
    norep(num);
   /* for(i=0;i<6;i++)
    {
        printf("|%d\t",num[i]);

    }
    printf("FIM\n");*/
    return 0;
}

void norep(int num[6])
{
    int j;

    for(j=0;j<6;j++)
    {    

        num[j]=sorteio();
    }
    imprime(num);
    return;
}
int sorteio()
{
    int num;
    num= (rand()%6)+1;
    
    return num;
}
void imprime(int num[6])
{
    int i;

    for(i=0;i<6;i++)
    {
        printf("|%d\t",num[i]);

    }
    printf("FIM\n");
    return ;
}

