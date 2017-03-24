
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void norep(int num[6]);
int sorteio();
void imprime(int num[6]);

int main()
{
    int i, num[6];

    srand( time(NULL));

    printf("tabela com os numero sem repeticao de 1 a 6\n");
    printf("a tabela se repetira por 100 vezes\n\n");

    for(i=0;i<100;i++)
    {
         norep(num);
    }

    return 0;
}

void norep(int num[6])
{
    int j,i;

    for(j=0;j<6;j++) /*zerando o vetor de numeros aleatorios*/
    {
        num[j]=0;
    }

    for(j=0;j<6;j++)
    {    

        num[j]=sorteio();
        for(i=0;i<j;i++)/*tirando a repeticao*/
        {
            if(num[i]==num[j])
            {
                j--;
                break;
            }

        }

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
    printf(" \n");
    return ;
}

