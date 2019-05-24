/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:33:23 by hde-vos           #+#    #+#             */
/*   Updated: 2019/05/24 17:25:30 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *ptr;
	const char *found;

	if (c == '\0')
		return (strchr(s, c));

	found = NULL;
	while ((ptr = strchr(s, c)) != NULL)
	{
		found = ptr;
		s = ptr + 1;
	}
	return ((char *)found);
}
