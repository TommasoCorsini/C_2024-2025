#include<stdio.h>
#include<limits.h>

int main()
{
    int a, b, c, nMin = INT_MAX, nMax = 0;
    do
    {
        printf("inserire a");
        scanf("%d", &a);
        printf("inserire b");
        scanf("%d", &b);
        printf("inserire c");
        scanf("%d", &c);
        if(a<b && b<a)
        {
            if(a<min)
            {
                nMin = a;
            }
            else
            {
                nMin = b
            }
        }
    } while (a>= 0 && b>= 0 c>= 0);
    printf("MASSIMO: %d\n", nMax);
    printf("MINIMO: %d", nMin);
    return 0;
}