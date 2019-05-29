/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:10:13 by hde-vos           #+#    #+#             */
/*   Updated: 2019/05/24 15:30:25 by hde-vos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	printf("%d\n", ft_isdigit(0));
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
	char *str;
	str = "123456789";
	int val = ft_atoi(str); 
    printf("%d\n", val); 
}


void test_strcat(void)
{
	char	src[50];
	char	dest[50];
	char	print[50];

	ft_strcpy(src,  "This is source");
	ft_strcpy(dest, "This is destination");
	ft_strcat(dest, src);
	printf("Final destination string : |%s|\n", dest);
}

void	test_strncpy(void)
{
   char src[50], dest[50];

   ft_strcpy(src,  "This is source");
   ft_strcpy(dest, "This is destination");
   ft_strncat(dest, src, 15);
   printf("Final destination string : |%s|\n", dest);
}

void	test_memccpy(void)
{
	char a;
	char b;
	char string1[60] = "Taj Mahal is a historic monument in India.";
	char buffer[61];
	char *pdest;
	printf( "Source: %s\n", string1 );
	pdest = ft_memccpy( buffer, string1, 'c', 42);
	pdest = memccpy( buffer, string1, 'c', 42);
	*pdest = '\0';
	printf("Result: %s\n", buffer);
}

void	test_strstr(void)
{
	char *str1;
	char *str2;

	str1 = "the cat is in the hat";
	str2 = "cat";
	printf("%s\n", ft_strstr(str1, str2));
}

void	test_memchr(void)
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;

	ret = memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);
}

void	test_memcmp(void)
{
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "AAAAAA", 6);

   ret = memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1\n");
   } else if(ret < 0) {
      printf("str1 is less than str2\n");
   } else {
      printf("str1 is equal to str2\n");
   }	
}

void	test_strchr(void)
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);	
}

void	test_strrchr(void)
{
   int len;
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
}

void	test_strnstr(void)
{
	const char *string;
	const char *string2;

	string = "what are you doing?";	
	string2 = "are";
	printf("%s\n", ft_strnstr(string, string2, 5));
}

void	test_strlcat(void)
{
	char	src[50];
	char	dest[50];

	ft_strcpy(src,  "This is source");
	ft_strcpy(dest, "This is destination");
	printf("Final destination string : |%d|\n", ft_strlcat(dest,src, 31));
}

int		main(void)
{
	test_memset();
	test_bzero();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_atoi();
	test_strcat();
	test_strncpy();
	test_memccpy();
	test_strstr();
	test_memchr();
	test_memcmp();
	test_strchr();
	test_strrchr();
	test_strnstr();
	test_strlcat();
	return (0);
}
