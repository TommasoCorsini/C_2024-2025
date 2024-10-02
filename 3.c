#include <stdio.h>

int main(int argc, char*argv[])
{
    int numero, cont=1;
    do
    {
        printf("inseriesci numero");
        scanf("%d", &numero);
    } while (numero < 0);
    printf("i numeri dispari sono\n:");
    do
    {
        printf("%d", cont);
        cont += 2;
    } while (cont <= numero);
    return 0;
}