#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int A = *a;
    int B = *b;
    *a = A / B;
    *b = A % B;
}

int main(void)
{
    int a = 50;
    int b = 11;

    int *ptrA = &a;
    int *ptrB = &b;

    ft_ultimate_div_mod(ptrA, ptrB);

    printf("%i | %i", a, b);

    return 0;
}