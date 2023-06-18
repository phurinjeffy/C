int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		j = 0;
		while (j < i)
		{
			if (base[j] == base[i] || base[i] == '-' || base[i] == '+'
				|| (9 <= base[i] && base[i] <= 13) || base[i] == 32)
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

int bobby(char *str, int result, int len_base, char *base)
{
    int digit_value;
    int found;
    int i;

    while (*str != '\0')
    {
        found = 0;
        digit_value = 0;
        i = 0;
        while (i < len_base)
        {
            if (*str == base[i])
            {
                digit_value = i;
                found = 1;
                break;
            }
            ++i;
        }
        if (found == 0)
            return (0);
        result = result * len_base + digit_value;
        ++str;
    }
    return (result);
}

int ft_atoi_base(char *str, char *base)
{
    int result;
    int sign;
    int len_base;
    
    result = 0;
    sign = 1;
    len_base = ft_strlen(base);
    if (check_base(base) == 1)
    {
        while (*str == 32 || (9 <= *str && *str <= 13))
            ++str;
        while (*str == '-' || *str == '+')
        {
            if (*str == '-')
                sign *= -1;
            ++str;
        }
        result = bobby(str, result, len_base, base);
        return (result * sign);
    }
    return (0);
}

#include <stdio.h>

int main()
{
    printf("%d",ft_atoi_base("bca","abcdefgh"));
}