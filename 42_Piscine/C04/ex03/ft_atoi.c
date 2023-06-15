#include <stdio.h>

int ft_atoi(char *str)
{
    int neg_count;
    int result;
    int i;
    int j;

    neg_count = 0;
    result = 0;
    i = 0;
    while (str[i] != '\0' && ('0' <= str[i] && str[i] <= '9') || str[i] == '+' || str[i] == '-' || (9 <= str[i] && str[i] <= 13) || str[i] == 32)
    {
        if (str[i] == '-')
        {
            ++neg_count;
        }
        if ('0' <= str[i] && str[i] <= '9')
        {
            j = i;
            while ('0' <= str[j] && str[j] <= '9')
            {
                result = result * 10 + (str[j] - '0');
                ++j;
            }
            if (!('0' <= str[j] && str[j] <= '9'))
                break;
        }
        ++i;
    }

    if ((neg_count % 2) != 0)
    {
        result *= -1;
    }
    return (result);
}

int main()
{
    printf("%i", ft_atoi(" ---+--+1234ab567"));
    // printf("%i", ft_atoi("987654"));
    return (0);
}