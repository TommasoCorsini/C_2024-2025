#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char tipo[12];
    int importo, mediaBevande, mediaRistorazioni, sommaBevande = 0, sommaRistorazione = 0;
    int bevande = 0, ristorazione = 0;

    do
    {
        do
        {
            printf("inserisci tipo prodotto: ");
            scanf("%s", tipologia);
        } while (strcmp("esci", tipologia) != 0 && strcmp(tipologia, "bevande") != 0 && strcmp(tipologia, "ristorazione") != 0);
        //strcmp confronta le due stringhe

        do
        {
            printf("importo: ");
            scanf("%d", &importo);
        } while (importo <= 0);

        if (strcmp(tipo, "bevande") == 0)
        {
            bevande++;
            sommaBevande += importo;
        }

        if (strcmp(tipo, "ristorazione") == 0)
        {
            ristorazione++;
            sommaRistorazione += importo;
        }

    } while (strcmp("esci", tipo) != 0);

    if (ristorazione > bevande)
    {
        printf("ristorazioni > bevande");
    }
    else
    {
        printf("bevande > ristoraizoni");
    }

    mediaBevande = sommaBevande / (double)bevande;
    mediaRistorazioni = sommaRistorazione / (double)ristorazione;

    printf("media bevande: %d\n", mediaBevande);
    printf("media ristorazione: %d\n", mediaRistorazioni);
    return 0;
}
