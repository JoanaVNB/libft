/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:43:17 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/22 02:48:43 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s++)
			return (0);
	}
	return ((char *)s);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char	ptr[50] = "XXcadete";
	char	*letra;
	char	*letraft;

	letraft = ft_strchr(ptr, 'X');
	letra = strchr(ptr, 'X');
	printf("FT: %c\n", *letraft);
	printf("Original: %c\n", *letra);
} */

/* A função irá varrer a sting até que 
encontre a char informada pela primeira vez.  */