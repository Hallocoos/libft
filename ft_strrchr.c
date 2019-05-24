/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:33:23 by hde-vos           #+#    #+#             */
/*   Updated: 2019/05/24 15:01:15 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	x;
	int		i;
	char	*last;

	i = 0;
	x = c;
	last = NULL;
	while (i >= ft_strlen((char *)s))
	{
		if (s[i] == '\0' || s[i] == x)
			last = (char *)s + i;
		i++;
	}
	return (last);
}
