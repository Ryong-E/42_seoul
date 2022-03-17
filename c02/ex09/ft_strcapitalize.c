/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donhan <donhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:07:08 by donhan            #+#    #+#             */
/*   Updated: 2022/01/22 17:07:13 by donhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	plag;

	i = 0;
	plag = 1;
	while (str[i] != '\0')
	{
		if (plag == 1 && 97 <= str[i] && str[i] <= 122)
		{
			str[i] -= 32;
			plag = 0;
			i++;
		}
		if (plag == 0 && 65 <= str[i] && str[i] <= 90)
			str[i] += 32;
		if ((str[i] >= 97 && str[i] <= 122) || \
			(str[i] >= 65 && str[i] <= 90) || \
			(str[i] >= '0' && str[i] <= '9'))
			plag = 0;
		else
			plag = 1;
		i++;
	}
	return (str);
}
