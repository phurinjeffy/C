#include <unistd.h>

int    length(char *str)
{
    int len;
    int i;

    len = 0;
    i = 0;
    while (str[i] != '\0')
    {
        ++len;
        ++i;
    }
    return (len);
}

void    ft_putstr(char *str)
{
    int len;

    len = length(str);
    write(1, str, len);
}

int main(void)
{
    char *str;
    str = "HELLO WORLD";
    ft_putstr(str);

    return 0;
}