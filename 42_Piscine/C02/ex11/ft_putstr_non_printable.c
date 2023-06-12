#include <unistd.h>

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

void charToHex(char c, char *hex)
{
    char *hexDigits = "0123456789abcdef";
    hex[0] = hexDigits[(c >> 4) & 0xF];
    hex[1] = hexDigits[c & 0xF];
}

void    ft_putstr_non_printable(char *str)
{
    int i;
    char *hex;

    i = 0;
    while (i < ft_strlen(str))
    {
        if ((32 <= str[i] && str[i] <= 126))
        {
            write(1, &str[i], 1);
        }
        else
        {
            write(1, "\\", 1);
            charToHex(str[i], &hex);
            write(1, &hex, 2);
        }
        ++i;
    }
}

// int main(void)
// {
//     char *str = "Coucou\ntu vas bien ?";

//     ft_putstr_non_printable(str);

//     return 0;
// }