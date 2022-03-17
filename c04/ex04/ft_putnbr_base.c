/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donhan <donhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:36:07 by donhan            #+#    #+#             */
/*   Updated: 2022/01/26 23:09:37 by donhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr_base_print(int nbr, char *base, unsigned int size)
{
	unsigned int	n;
	unsigned char	p;

	if (nbr < 0)
	{
		write (1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= size)
		ft_putnbr_base_print (n / size, base, size);
	p = base[n % size];
	write (1, &p, 1);
}

int	possible(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] == '-' || c[i] == '+' || c[i] == c[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (possible(base) == 1)
	{
		while (base[i] != '\0')
			i++;
		ft_putnbr_base_print (nbr, base, i);
	}
}
