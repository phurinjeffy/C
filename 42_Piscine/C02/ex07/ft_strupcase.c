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

char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (i < ft_strlen(str))
    {
        if ((97 <= str[i] && str[i] <= 122))
        {
            str[i] -= 32;
        }
        ++i;
    }

    return (str);
}

int main(void)
{
    char str1[] = "abcADLKSAJdDSAKLefg";
    char *str2;

    str2 = ft_strupcase(str1);

    printf("%s\n", str2);

    return 0;
}