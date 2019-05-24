/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:28:45 by hde-vos           #+#    #+#             */
/*   Updated: 2019/05/24 14:57:22 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t srclen;
	size_t dstlen;
	
	srclen = strlen(src);
	dstlen = strnlen(dst, dstsize);
	if (dstlen == dstsize)
		return dstsize + srclen;
	if (srclen < dstsize - dstlen) {
		memcpy(dst + dstlen, src, srclen + 1);
	}
	else
	{
		memcpy(dst + dstlen, src, dstsize - 1);
		dst[dstlen + dstsize - 1] = '\0';
	}
	return (dstlen + srclen);
}
