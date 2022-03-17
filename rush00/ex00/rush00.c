/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyoo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:27:00 by juyoo             #+#    #+#             */
/*   Updated: 2022/01/09 14:27:11 by juyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	edge_line(int x)
{
	int	i;

	ft_putchar('o');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar('-');
		i++;
	}
	if (x != 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	middle_line(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y - 2)
	{
		ft_putchar('|');
		i = 0;
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		if (x != 1)
		{
			ft_putchar('|');
		}
		ft_putchar('\n');
		j++;
	}
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
	{
		return ;
	}
	edge_line(x);
	if (y != 1)
	{
		middle_line(x, y);
		edge_line(x);
	}
}
