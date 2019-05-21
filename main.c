/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:10:13 by hde-vos           #+#    #+#             */
/*   Updated: 2019/05/21 11:38:48 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		test_memset(void)
{
	char str[50];

	ft_strcpy(str,"This is string.h library function");
	puts(str);
	ft_memset(str,'$',7);
	puts(str);
}

void test_bzero()
{
	char str[50];

	ft_strcpy(str, "This is string.h library function");
	puts(str);
	ft_bzero(str, 7);
	puts(&str[6]);
}

int		main(void)
{
//	test_memset();
//	test_bzero();

}
