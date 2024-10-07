#include <stdio.h>
 int main(int argc, char *argv[])
 {
 int n1,n2;

    do
    {
        printf("Inserisci numero1 >0 : \n");
        scanf("%d",&n1);
    }while(n1<0);
    do
    {
        printf("Inserisci numero2 >0 : \n");
        scanf("%d",&n2);
    }while(n2<0);
        printf("\n \n");
    }while(n2<=n1);
    do
    {
        n2--;
        printf("%d ",n2);
    }while(n2>n1);

 return 0;
 }