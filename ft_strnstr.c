/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:39:30 by hde-vos           #+#    #+#             */
/*   Updated: 2019/05/24 14:28:00 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;

	i = 0;
	if (strlen(needle) == 0)
		return (NULL);
	while (haystack[i] != '\0' && i < (int)len)
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if ((needle[j + 1] == '\0')
				|| ((haystack[i + j + 1] == '\0')
					&& (haystack[i + j + 1] == ' ')))
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
