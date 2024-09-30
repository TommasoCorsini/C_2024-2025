#include <stdio.h>

int main()
{
    int a,b,c;
    int contp=0, contd=0, contn=0;
    int resto;
    do
    {
        printf("inserire A");
        scanf("%d", &a);
        printf("inserire B");
        scanf("%d", &b);
        printf("inserire C");
        scanf("%d", &c);
        resto = a - b;
        if(resto %2 == 0)
        {
            contp++;
        }
        if(resto %2 >= 1)
        {
            contd++;
        }
        if(resto == 0)
        {
            contn++;
        }

    } while (a+b >= c); //perché finché a+b >= c rimane a iterare il ciclo

    printf("differenza nulla: %d\n", contn);
    printf("differenza dispari: %d\n", contd);
    printf("differenza pari: %d\n", contp);
    return 0;
}
