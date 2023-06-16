/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <pvanasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 10:01:44 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/16 16:34:50 by pvanasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	power(int nb)
{
	int	e;

	e = 1;
	while (nb)
	{
		e *= 10;
		nb /= 10;
	}
	return (e / 10);
}

void	ft_putnbr(int nb)
{
	char	temp;
	int		e;

	e = power(nb);
	if (nb == 0)
		write(1, "0", 1);
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 2147483647)
		write(1, "2147483647", 10);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		while (nb)
		{
			temp = nb / e + '0';
			write(1, &temp, 1);
			nb %= e;
			e /= 10;
		}
	}
}

/*int	main(void)
{
	ft_putnbr(123);
	printf("\n");
	ft_putnbr(5);
	printf("\n");
	ft_putnbr(98);
	printf("\n");
	ft_putnbr(-12354);
}*/
