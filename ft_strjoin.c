/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 03:39:36 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/22 03:41:31 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d_i;
	unsigned int	s_i;

	d_i = 0;
	s_i = 0;
	while (dest[d_i] != '\0')
	{
		d_i++;
	}
	while (src[s_i] != '\0' && s_i < nb)
	{
		dest[d_i + s_i] = src[s_i];
		s_i++;
	}
	dest[d_i + s_i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*str_dest;
	size_t	len1;
	size_t	len2;
	size_t	len;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	len = len1 + len2;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str_dest = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (str_dest);
}

/* #include <stdio.h>

int main ()
{
	char const *s1 = "cadete ";
	char const *s2 = "joana";
	char *ptr;

	ptr = ft_strjoin(s1, s2);
	printf("%s\n", ptr);
} */

//Aloca (com malloc(3)) e retorna uma nova string, 
//que é o resultado da concatenação de 's1' e 's2'.