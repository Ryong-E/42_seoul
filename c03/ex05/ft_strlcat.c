/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donhan <donhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:36:07 by donhan            #+#    #+#             */
/*   Updated: 2022/01/25 19:57:52 by donhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	len_max(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_max;
	unsigned int	src_max;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	dest_max = len_max(dest);
	src_max = len_max(src);
	if (size <= dest_max)
		return (src_max + size);
	j = dest_max;
	while (j + 1 < size && src[i] != '\0')
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest_max + src_max);
}
