#include <stdio.h>
 int main(int argc, char *argv[])
 {
    int n, n2;
    do
    {
        printf("Inserisci un numero >1 : \n");
        scanf("%d",&n);
    }while(n<=1);
n2=n-1;
 printf("Il numero precedente è: \n");
 printf("%d" ,n2);
 
 return 0
 }