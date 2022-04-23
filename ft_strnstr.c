/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 04:11:22 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/23 08:17:13 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && *s1 == *s2 && (int)n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n)
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	else
		return (0);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_size;
	size_t	i;

	l_size = ft_strlen(little);
	i = 0;
	if (!*little)
		return ((char *) big);
	else
	{
		while (*big && (i < len))
		{
			if ((ft_strncmp(big, little, l_size) == 0)
				&& (i + l_size <= len))
				return ((char *)big);
			else
				big++;
				i++;
		}
	}	
	return (0);
}

/* #include <stdio.h>
int main (void)
{
	printf("%s\n", ft_strnstr("Sou cadete da 42", "ete", 3));
} */
