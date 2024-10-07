#include <stdio.h>
 int main(int argc, char *argv[])
 {
    int n;
    do
    {
        printf("Inserisci un numero >0 : \n");
        scanf("%d",&n);
    }while(n<=0);
 for(int i=n;i>=0;i--)
 {
 printf("%d ",i);
 }
 
 return 0;
 }