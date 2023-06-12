#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// int main(void)
// {
//     int a = 5;
//     int b = 10;

//     int *ptrA = &a;
//     int *ptrB = &b;

//     ft_swap(ptrA, ptrB);

//     printf("a: %i | b: %i", a, b);

//     return 0;
// }