/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:20:10 by hde-vos           #+#    #+#             */
/*   Updated: 2019/06/03 11:34:32 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newstr;
	int		i;

	newstr = (char *)malloc(sizeof(s) + 1);
	i = 0;
	while (s[i])
	{
		newstr[i] = f(s[i]);
		i++;
	}
	return (newstr);
}
