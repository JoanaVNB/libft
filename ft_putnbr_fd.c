/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:27:39 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/23 07:40:46 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
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

void	ft_putnbr_fd(int n, int fd)
{
	char	*a;

	a = ft_itoa(n);
	while (*a)
		write(fd, a++, 1);
}

/* int main ()
{
	ft_putnbr_fd(-123456789, 1);
	ft_putnbr_fd(123456789, 1);
} */
