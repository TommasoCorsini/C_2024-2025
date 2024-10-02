#include<stdio.h>

int main(int argc, char*argv[])
{
    int N, cont=0;
    printf("inserisci N\n");
    scanf("%d", &N);
    if(N>0)
    {
        cont = N+1;
    }
    else
    {
        printf("inserire un numero positivo");
    }
    printf("il numero successivo è: %d\n", cont);
    return 0;
}
