#include <unistd.h>

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

void	ft_putnbr_base(int nbr, char *base)
{
	if (check_base(base) == 1)
	{
		if (nbr == -2147483648)
		{
			write(1, "-", 1);
			ft_putnbr_base(-(nbr / ft_strlen(base)), base);
			ft_putnbr_base(-(nbr % ft_strlen(base)), base);
		}
		else
		{
			if (nbr < 0)
			{
				write(1, "-", 1);
				nbr *= -1;
			}
			if (nbr < ft_strlen(base))
				write(1, &base[nbr], 1);
			if (nbr >= ft_strlen(base))
			{
				ft_putnbr_base(nbr / ft_strlen(base), base);
				ft_putnbr_base(nbr % ft_strlen(base), base);
			}
		}
	}
}