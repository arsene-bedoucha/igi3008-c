#include <stdio.h>

void swap2(int *x, int *y)
{
    int tmp=0;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int a = 1;
    int b = 2;

    printf("AVANT : a = %d, b = %d\n", a, b);
    swap2(&a, &b);
    printf("APRES : a = %d, b = %d\n", a, b);
    return 0;
}

// Le résultat obtenu est bien celui qu'on attendait.
// Ici on ne travaille pas aves des valeurs locales mais avec les adresses.