#include <stdio.h>

int     ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
    {
        ++len;
    }

    return (len);
}

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    if (ft_strlen(dest) > 0)
    {
        dest = src;
    }
    
    int i;
    int buffer;

    i = 0;
    while (i < size)
    {
        dest[i] = src[i];
        ++i;
        ++buffer;
    }

    return (buffer);
}

// int main(void)
// {
//     char *str1 = "hellojeffjeffjeff";
//     char *str2 = "HELLO";

//     int buffer;

//     buffer = ft_strlcpy(str2, str1, 5);

//     printf("%i", buffer);

//     return 0;
// }