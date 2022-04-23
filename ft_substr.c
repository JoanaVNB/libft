/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 04:23:22 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/22 04:29:20 by jvidon-n         ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	unsigned int	slen;

	slen = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!s || !str)
		return (NULL);
	i = start;
	j = 0;
	if (start < slen)
	{
		while (i < start + len && s[i] != '\0')
		{
			str[j] = s[i];
			j++;
			i++;
		}
	}
	str[j] = '\0';
	return (str);
}

/* #include <stdio.h>
int main ()
{
	char const s[7] = "cadete";
	unsigned int start = 2; // no d
	size_t len = 4; // apenas 4 caracteres
	char *str;
	
	str = ft_substr(s, start, len);
	printf("%s\n", str);
} */

/* busca pela string S começe na posição START enquanto 
tiver o tamanho LEN, na minha função retorna o ponteiro criado STR. */