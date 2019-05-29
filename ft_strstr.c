/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:08:07 by hde-vos           #+#    #+#             */
/*   Updated: 2019/05/29 13:17:19 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (ft_strlen(to_find) == 0 || to_find == 0)
		return (str + i);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if ((to_find[j + 1] == '\0')
				|| ((str[i + j + 1] == '\0') && (str[i + j + 1] == ' ')))
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
