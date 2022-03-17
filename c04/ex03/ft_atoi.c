/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donhan <donhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:09:03 by donhan            #+#    #+#             */
/*   Updated: 2022/01/25 20:36:01 by donhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' || c == '\v' || \
			c == '\f' || c == '\r');
}

int	ft_atoi(char *str)
{
	int	minus;
	int	p;
	int	c;

	minus = 1;
	p = 0;
	c = 0;
	while (is_space(str[c]))
		c++;
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			minus *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		p *= 10;
		p += str[c] - '0';
		c++;
	}
	return (p * minus);
}
