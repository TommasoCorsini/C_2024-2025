#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    double r;

    do
    {
        printf("inserire a");
        scanf("%d", &a);
        printf("inserire b");
        scanf("%d", &b);

        if(a<b)
        {
            r = (double)b/(double)a;
        }
        else
        {
            r = (double)a/(double)b;
        }
        if(r>0)
        {
            r = sqrt(r);
            printf("radice: %f\n", r);
        }
    } while (r > 0);
    printf("non si può calcolare la radice di n negativo");
    return 0;
    
}