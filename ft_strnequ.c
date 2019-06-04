/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:45:41 by hde-vos           #+#    #+#             */
/*   Updated: 2019/06/04 10:55:40 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
		if (s1[i] == s2[i])
			i++;
		else
			return (0);
	if (i == n || (s1[i] == '\0' && s2[i] == '\0'))
		return (1);
	else
		return (0);
}
