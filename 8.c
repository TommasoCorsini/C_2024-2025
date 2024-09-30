#include<stdio.h>
#include<math.h>

int main()
{
    int N, numero, cont = 0;
    somma = 0;
    do
    {
        printf("inserire N numeri > 0");
        scanf("%d", &N);
    } while (N <= 0);
    do
    {
        printf("inserire numero");
        scanf("%d", numero);
        cont++;
        if(numero>0)
        {
            somma += sqrt(numero);
        }
        else
        {
            printf("non possibile, inserito numero negativo");
        }
    } while (cont < N && numero> 0);
    printf("la somma delle radici vale: %d\n ", somma);
    return 0;

    
}