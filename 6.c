#include <stdio.h>

int main()
{
    int numero, a,b,c, cont;
    double media;
    do
    {
        printf("inserire a");
        scanf("%d", &a);
        printf("inserire b");
        scanf("%d",&b);
    } while (b < a);
    do
    {
        printf(inserire un numero);
        scanf("%d", &numero);

        if(numero >= a && numero >= b)
        {
            somma += numero;
            cont++;
        }
    } while (n >= a && n<= b);
    
    media = (double)somma/(double)cont;
    printf("la media è: %f\n", media);
    return 0;
}