/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donhan <donhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:15:33 by donhan            #+#    #+#             */
/*   Updated: 2022/01/24 21:38:49 by donhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	unsigned char	*string;


	string = (unsigned char*)str;
	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == '\0')
			break ;
		if (32 <= string[i] && string[i] <= 126)
		{
			ft_putchar(string[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[string[i] / 16]);
			ft_putchar("0123456789abcdef"[string[i] % 16]);
		}
		i++;
	}
}
int main(void)

{
	ft_putstr_non_printable("fdkgfdkljgjldfgmkdslgsn\n\n\xff\xfa");
}
