/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:30:50 by taejpark          #+#    #+#             */
/*   Updated: 2022/01/09 16:30:57 by taejpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int	i;

	ft_putchar('/');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	if (x != 1)
	{
		ft_putchar('\\');
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
		ft_putchar('*');
		i = 0;
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		if (x != 1)
		{
			ft_putchar('*');
		}
		ft_putchar('\n');
		j++;
	}
}

void	last_line(int x)
{
	int	i;

	ft_putchar('\\');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	if (x != 1)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
	{
		return ;
	}
	first_line(x);
	if (y != 1)
	{
		middle_line(x, y);
		last_line(x);
	}
}
