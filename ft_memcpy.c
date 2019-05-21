/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:20:00 by hde-vos           #+#    #+#             */
/*   Updated: 2019/05/21 14:35:51 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int i;

	i = 0;
	if (n-- > 0)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
