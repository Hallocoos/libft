#ifndef LIBFT_H 
# define LIBFT_H

# include <stdlib.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, int n);
char	*ft_strncpy(char *dest, char *src, int n);
char	*ft_strstr(char *str, char *to_find);
void	*ft_memset(void *b, int c, size_t len);

#endif
