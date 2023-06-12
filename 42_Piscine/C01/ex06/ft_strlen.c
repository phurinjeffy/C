#include <stdio.h>

int     ft_strlen(char *str)
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

// int main(void)
// {
//     char *str;
//     str = "HELLO WORLD";
//     int len = ft_strlen(str);

//     printf("%i", len);

//     return 0;
// }