/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:04:23 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/22 02:10:00 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char			*s;
	unsigned char	a;
	size_t			i;

	s = (char *)str;
	a = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		s[i] = a;
		i++;
	}
	return (s);
}

/* #include <stdio.h>

int main ()
{
	char str[10] = "cadete";
	char a = '!';
	size_t n = 4;
	char *ptr;

	ptr = ft_memset(str, a, n);
	printf("%s\n", ptr);
} */

//copia o caractere c (um unsigned char) para os primeiros
// n caracteres da string apontada,
// pelo argumento str . str nesse caso é a string destino.