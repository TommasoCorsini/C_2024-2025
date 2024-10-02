#include<stdio.h>

int main(int argc, char*argv[])
{
    int numero, N;
    do
    {
        printf("inserire numero");
        scanf("%d", &numero);
    } while (numero<=0);
    
    
    do
    {
        N++;
        printf("%d", &N)
    } while (N<numero);
    
    return 0;
}