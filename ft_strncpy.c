/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-vos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 09:11:55 by hde-vos           #+#    #+#             */
/*   Updated: 2019/05/20 13:06:56 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, int n)
{
	int i;

	if (n > -1)
	{
		i = 0;
		if (n == 0)
			dest = "";
		else
			while (i++ < n)
				dest[i] = src[i];
		dest[i] = '\0';
	}
	return (dest);
}

int main(void)
{
	char	*s1 = "lakjsdhflkajhsdfl";
	char	*s2 = "11111111111111111";

	ft_strncpy(s1, s2, 4);
	return(0);
}
