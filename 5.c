#include <stdio.h>
int main(int argc, char*argv[])
{
    int N1,N2;
    do
    {
        printf("inserisci n1\n");
        scanf("%d", &N1);
        printf("inserisci n2\n");
        scanf("%d", &N2);
    } while (N1<0||N2<=N1);
    while(N1<=N2) //no do while perché non deve iterare
    //per forza una volta ma itera solo se rispetta la condizione
    {
        printf("%d\n", N1);
        N1++;
    }
    return 0;
}