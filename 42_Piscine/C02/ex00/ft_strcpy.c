#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    dest = src;

    return (dest);
}

int main(void)
{
    char *str1 = "hello";
    char *str2 = "test";

    str2 = ft_strcpy(str2, str1);

    printf("%s", str2);

    return 0;
}