#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[])
{   
    if(argc != 3 /*numero di parametri (base e esponente)*/)
    {
        printf("errore degli argomenti");
        exit(0);
    }
    int base = atoi(argv[1]);
    int esponente = atoi(argv[2]);
    int risultato = 1;
    if(base < 0 || esponente < 0)
    {
        printf("inserire numeri positivi");
        exit(0);
    }
    if(base == 0)
    {
        if(esponente == 0)
        {
            printf("elevato zero per sè stesso");
            exit(0);
        }
        risultato = 1;
    }
    for (int i = 0; i < esponente; i++)
    {
        risultato = base * risultato;
    }
    printf("il risultato: %d ^ %d = %d\n", base, esponente, risultato);
    return 0;
}