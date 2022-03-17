/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donhan <donhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:53:03 by donhan            #+#    #+#             */
/*   Updated: 2022/01/16 14:05:59 by donhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = a / 10 + 48;
	a2 = a % 10 + 48;
	b1 = b / 10 + 48;
	b2 = b % 10 + 48;
	write (1, &a1, 1);
	write (1, &a2, 1);
	write (1, " ", 1);
	write (1, &b1, 1);
	write (1, &b2, 1);
	if (a != 98 || b != 99)
	{
		write (1, ", ", 1);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a, b);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2(void);
	return (0);
}
