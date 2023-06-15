#include <unistd.h>
#include <stdio.h>

int power(int nb)
{
    int e;

    e = 1;
    while (nb)
    {
        e *= 10;
        nb /= 10;
    }

    return (e / 10);
}

void ft_putnbr(int nb)
{
    int e;
    char temp;

    e = power(nb);
    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    while (nb)
    {
        temp = nb / e + '0';
        write(1, &temp, 1);
        nb %= e;
        e /= 10;
    }
}

int main()
{
    ft_putnbr(123);
    printf("\n");
    ft_putnbr(5);
    printf("\n");
    ft_putnbr(98);
    printf("\n");
    ft_putnbr(-12354);
}