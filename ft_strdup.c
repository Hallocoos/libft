/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:09:55 by hde-vos           #+#    #+#             */
/*   Updated: 2019/05/23 16:27:48 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	void	*new;

	size = strlen(s1) + 1;
	new = malloc(size);
	if (new == NULL)
		return (NULL);
	return (char *)ft_memcpy(new, s1, size);
}
