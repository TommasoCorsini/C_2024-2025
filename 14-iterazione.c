#include <stdio.h>
int main(int argc, char*argv[])
{
    int n1,n2, prodotto=0, cont=0;
    do
    {
        printf("inserire n1>=1\n");
        scanf("%d", &n1);
    }while(n1<1);
    do
    {
        printf("inserire n2>=1\n");
        scanf("%d", &n2);
    }while(n2<1);
    printf("\n");
    do
    {
        prodotto = prodotto+n1;
        cont = cont + 1;
    }while(cont<n2);
    printf("prodotto: %d\n", prodotto);
    return 0;
}