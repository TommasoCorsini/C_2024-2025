#include <stdio.h>
int main(int argc, char*argv[])
{
    int numero;
    int somma;
    int cont;
    do 
    {
        printf("inserire N\n");
        scanf("%d", &numero);
    }while(numero<0);
    
    somma = 0;
    cont = numero; //in questo modo il numero viene incrementato sempre e la somma
    //sarà direttamente il numero una volta finite le iterazioni
        do
        {
                somma = somma + cont;
                cont = cont+2;
        }while(cont>0);
    printf("la somma vale: %d\n", somma);
    return 0;
}