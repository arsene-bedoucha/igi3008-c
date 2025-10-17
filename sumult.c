#include <stdio.h>

void sumult(int *x, int *y)
{
    int a = *x;
    int b = *y;

    *x = a +b;
    *y = a * b;
}

int main()
{
    
    int a;
    printf("Entrez la valeur de a : ");
    scanf("%d", &a)
    ;
    int b;
    printf("Entrez la valeur de b : ");
    scanf("%d", &b);

    printf("On a : a = %d, b = %d\n", a, b);

    sumult(&a, &b);
    printf("Donc : a + b = %d, a * b = %d\n", a, b);

}
