/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:13:28 by hde-vos           #+#    #+#             */
/*   Updated: 2019/06/04 11:37:02 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;

	s = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	i = 0;
	while (i < ft_strlen(s1))
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	ft_strcat(s, s2);
	if (s == NULL)
		return (NULL);
	else
		return (s);
}
