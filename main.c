/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:10:13 by hde-vos           #+#    #+#             */
/*   Updated: 2019/05/22 12:23:55 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

	/*
void	test_memset(void)
{
	char str[50];

	ft_strcpy(str, "This is string.h library function");
	puts(str);
	ft_memset(str, '$', 7);
	puts(str);
}

void	test_bzero(void)
{
	char str[50];

	ft_strcpy(str, "This is string.h library function");
	puts(str);
	ft_bzero(str, 7);
	puts(&str[6]);
}

void	test_isdigit(void)
{
	printf("%d", ft_isdigit(0));
}

void	test_isalnum()
{
	int var = 'd';

	if (ft_isalnum(var))
		printf("var = |%c| is alphanumeric\n", var );
	else
		printf("var = |%c| is not alphanumeric\n", var );
}

void test_isascii(void)
{
	
}


void test_atoi (char *str)
{
	int val = ft_atoi(str); 
    printf("%d ", val); 
}


void test_strcat(void)
{
	char	src[50];
	char	dest[50];
	char	print[50];

	ft_strcpy(src,  "This is source");
	ft_strcpy(dest, "This is destination");
	ft_strcat(dest, src);
}
	*/

void	main(void)
{
   char src[50], dest[50];

   ft_strcpy(src,  "This is source");
   ft_strcpy(dest, "This is destination");
   ft_strncat(dest, src, 15);
   printf("Final destination string : |%s|", dest);
}
int		main(void)
{
	/*
	test_memset();
	test_bzero();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_atoi(argv[1]);
	test_strcat();
	*/
	return (0);
}
