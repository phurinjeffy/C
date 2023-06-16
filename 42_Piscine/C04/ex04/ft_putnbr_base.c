/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:11:41 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/16 21:18:30 by pvanasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(int n)
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

	}
}
