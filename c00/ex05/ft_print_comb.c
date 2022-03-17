/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donhan <donhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:56:21 by donhan            #+#    #+#             */
/*   Updated: 2022/01/16 13:58:14 by donhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a != 7 || b != 8 || c != 9)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	d;
	int	e;
	int	f;

	d = '0';
	while (d < '8')
	{
		e = d + 1;
		while (e < '9')
		{
			f = e + 1;
			while (f <= '9')
			{
				ft_putchar(d, e, f);
				f++;
			}
			e++;
		}
		d++;
	}
}
