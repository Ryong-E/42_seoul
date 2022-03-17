/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donhan <donhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 10:03:23 by donhan            #+#    #+#             */
/*   Updated: 2022/01/18 14:55:54 by Handongryong     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	num;

	i = 0;
	while (i < size / 2)
	{
		num = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size -1 - i] = num;
		i++;
	}
}
