/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:11:01 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/23 07:40:58 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nlen(int n)
{
	size_t	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static	char	*convert_itoa(char *str, size_t size,
								unsigned int num, unsigned int neg)
{
	if (str[size] == '\0')
	{
		while (size--)
		{
			str[size] = (num % 10) + 48;
			num = num / 10;
		}
	}
	if (neg)
		*str = '-';
	return (str);
}

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

char	*ft_itoa(int n)
{
	size_t			n_len;
	unsigned int	neg;
	char			*str;

	n_len = ft_nlen(n);
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	str = malloc(sizeof(char) * (n_len + 1));
	if (!str)
		return (NULL);
	return (str = convert_itoa(str, n_len, (unsigned int) n, neg));
}

/* #include <stdio.h>
int main (void)
{
	int n = 48785;
	char *ptr;

	int n2 = -48785;
	char *vtr;

	int n3 = 0;
	char *a;
	
	ptr= ft_itoa(n);
	vtr= ft_itoa(n2);
	a= ft_itoa(n3);
	printf("%s\n" "%s\n" "%s\n", ptr, vtr, a);
} */