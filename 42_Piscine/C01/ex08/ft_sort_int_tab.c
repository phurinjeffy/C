#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int temp;
    int i;

    i = 0;
    while (i < size / 2)
    {
        temp = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = temp;
        ++i;
    }
}

int main(void)
{
    int array[5] = {4,2,5,1,3};

    ft_sort_int_tab(array, 5);

    int i = 0;
    while (i < 5)
    {
        printf("%i", array[i]);
        ++i;
    }
    
    return 0;
}