/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 10:56:03 by hde-vos           #+#    #+#             */
/*   Updated: 2019/06/04 11:13:16 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	str = (char *)malloc(len + 1);
	i = 0;
	if (ft_strlen(s) == 0)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i + (int)start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
