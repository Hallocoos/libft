/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:09:55 by hde-vos           #+#    #+#             */
/*   Updated: 2019/05/21 14:50:08 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int size;

	size = strlen(s1) + 1;
	void *new = malloc (size);
	if (new == NULL)
		return (NULL);
	return (char *) ft_memcpy(new, s1, size);
}
