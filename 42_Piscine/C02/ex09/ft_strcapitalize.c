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

char    *ft_strcapitalize(char *str)
{
    int i;
    int check;

    if (97 <= str[0] && str[0] <= 122)
    {
        str[0] -= 32;
    }

    i = 1;
    while (i < ft_strlen(str))
    {
        if (!((97 <= str[i-1] && str[i-1] <= 122) || (65 <= str[i-1] && str[i-1] <= 90) || (48 <= str[i-1] && str[i-1] <= 57)))
        {
            check = 1;
        }
        else
        {
            check = 0;
        }
        if ((97 <= str[i] && str[i] <= 122) && check == 1)
        {
            str[i] -= 32;
        }
        else if ((65 <= str[i] && str[i] <= 90) && check == 0)
        {
            str[i] += 32;
        }
        ++i;
    }

    return (str);
}

// int main(void)
// {
//     char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
//     char *str2;

//     str2 = ft_strcapitalize(str1);

//     printf("%s\n", str2);

//     return 0;
// }