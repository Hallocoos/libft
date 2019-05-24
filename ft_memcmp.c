/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:54:26 by hde-vos           #+#    #+#             */
/*   Updated: 2019/05/24 13:11:41 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*string1;
	char	*string2;

	i = 0;
	while (i < n && strlen(string1) > 0 && strlen(string2) > 0 &&
			(string1[i] != '\0' || string2[i] != '\0'))
	{
		if (string1[i] == string2[i])
			i++;
		else
			return (string1 - string2);
	}
	return (0);
}
