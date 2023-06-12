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

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    // if (ft_strlen(dest) > 0)
    // {
    //     dest = src;
    //     return (dest);
    // }

    unsigned int i;

    i = 0;
    while (i < n)
    {
        dest[i] = src[i];
        ++i;
    }

    return (dest);
}

// int main(void)
// {
//     char *str1 = "hellojeffjeffjeff";
//     char *str2 = "test";

//     str2 = ft_strncpy(str2, str1, 5);

//     printf("%s", str2);

//     return 0;
// }