#include <stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int a;
    int *ptr = &a;
    ft_ft(ptr);

    printf("%i", a);

    return 0;
}