/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 04:16:33 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/22 04:20:17 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	if (j == -1)
		return (0);
	return ((char *)&s[j]);
}

/* #include <string.h>
#include <stdio.h>
int main (void)
{
	printf("%s\n", ft_strrchr("Sou cadete da 42", 'e'));
	printf("%s\n", strrchr("Sou cadete da 42", 'e'));
} */