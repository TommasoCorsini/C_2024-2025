#include <stdio.h>
int main(int argc, char*argv[])
{
    int numero, cont=0;
    do
    {
        printf("inserire numero 0 o maggiore di zero");
        scanf("%d", &numero);
    } while (numero < 0);
    do
    {
        printf("il numero vale:%d\n:", cont);
        cont += 2;
    } while (cont <= numero);
    return 0;
}