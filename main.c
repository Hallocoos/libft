/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:10:13 by hde-vos           #+#    #+#             */
/*   Updated: 2019/05/23 16:31:50 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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


void test_atoi ()
{
	str[50] = "123456789";
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

void	test_strncpy(void)
{
   char src[50], dest[50];

   ft_strcpy(src,  "This is source");
   ft_strcpy(dest, "This is destination");
   ft_strncat(dest, src, 15);
   printf("Final destination string : |%s|", dest);
}

void	test_memccpy(void)
{
	char a;
	char b;
	char string1[60] = "Taj Mahal is a historic monument in India.";
	char buffer[61];
	char *pdest;
	printf( "Function: _memccpy 42 characters or to character 'c'\n" );
	printf( "Source: %s\n", string1 );
	pdest = ft_memccpy( buffer, string1, 'c', 42);
	pdest = memccpy( buffer, string1, 'c', 42);
	a = ft_memccpy( buffer, string1, 'c', 42);
	b = memccpy( buffer, string1, 'c', 42);
	if (a == b)
		printf("Equal\n");
	else
		printf("Not equal\n");
	*pdest = '\0';
	printf("Result: %s\n", buffer);
	printf("Length: %d characters\n", ft_strlen(buffer));
}
*/

void	test_strstr(void)
{
	char *str1;
	char *str2;

	str1 = "the cat is in the hat";
	str2 = "cat";
	printf("%s", ft_strstr(str1, str2));
}

int		main(void)
{
	/*
	test_memset();
	test_bzero();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_atoi();
	test_strcat();
	test_strncpy():
	test_memccpy();
*/	
	test_strstr();
	return (0);
}
