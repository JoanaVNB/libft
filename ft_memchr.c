/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:16:34 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/22 01:38:50 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == character)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}

//#include <stdio.h>
//#include <string.h>
/* int main ()
{
	const void *s= "cadete";
	char c = 'c';
	size_t n = 20; 
	char *ptr;

	ptr = memchr (s, c, 20);
	printf("Original: %s\n", ptr);
	
	ptr = ft_memchr (s, c, n);
	printf("Ft: %s\n", ptr);
} */