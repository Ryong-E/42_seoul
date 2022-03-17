/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donhan <donhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:57:11 by donhan            #+#    #+#             */
/*   Updated: 2022/01/26 23:36:25 by donhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	base_is_space(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1] || \
				base[i] == ' ' || base[i] == '\n' || base[i] == '\t' || \
				base[i] == '\v' || base[i] == '\f' || base[i] == '\r')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	str_is_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == str[i + 1] || \
				str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || \
				str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	atoi(char *str)
{
	int	p;
	int	c;
	int	minus;

	p = 0;
	minus = 1;
	c = 0;
	while (str[c] == '-' || str[c] == '+')
		if (str[c] == '-')
			minus *= -1;
		c++;
	while (str[c] >= '0' && str[c] <= '9')
	{
		p *= 10;
		p += str[c] - '0';
		c++;
	}
	return (p * minus);
}

int	print(int nbr, char *base, unsigned int size)
{
	unsigned int	n;
	unsigned int	p;
	int	r;
	
	if (nbr < 0)
		n = nbr * (-1)
		print(n ,base, size);
		p *= -1;
	else
		n = nbr;
	if (n >= size)
		print (n / size, base, size);
	p = base[n   % size];
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	size;
	int	minus;
	int	nbr;
	int	result;

	size = 0;
	nbr = atoi(str);
	i = 0;
	minus = 1;
	if (base_is_space(base) == 0)
		return (0);
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	if (str_is_space(str) == 1)
	{
		while (base[size] != '\0')
			size++;
		result = print(nbr, base, size);
	}
}
