/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:37:31 by hde-vos           #+#    #+#             */
/*   Updated: 2019/06/04 13:47:38 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*newstr;

	i = 0;
	k = 0;
	j = ft_strlen(s) - 1;
	newstr = ft_strnew(j);
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (i <= j)
	{
		newstr[k] = s[i];
		i++;
		k++;
	}
	newstr[k] = '\0';
	return (newstr);
}
