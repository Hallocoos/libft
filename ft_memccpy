/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:27:48 by hde-vos           #+#    #+#             */
/*   Updated: 2019/05/23 16:29:22 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	v;
	int				i;
	int				j;
	char			*dest;
	char			*source;

	dest = dst;
	source = src;
	v = c;
	i = 0;
	j = ft_strlen(dst) - 1;
	while (n-- >= 0)
	{
		if (source[i] == v)
		{
			dest[j + i] = source[i];
			i++;
			break ;
		}
		dest[j + i] = source[i];
		i++;
	}
	dest[i] = '\0';
	return (dst + i);
}
