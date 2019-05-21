/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:14:50 by hde-vos           #+#    #+#             */
/*   Updated: 2019/05/21 14:17:22 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i++ < n)
			dest[i] = src[i];
		dest[i] = '\0';
	}
	else
		dest = "";
	return (dest);
}
