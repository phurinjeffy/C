#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	while (*str == 32 || (9 <= *str && *str <= 13))
		++str;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while ('0' <= *str && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		++str;
	}
	result *= sign;
	return (result);
}

/*int	main(void)
{
	printf("%i", ft_atoi(" ---+--+1234ab567"));
	return (0);
}*/