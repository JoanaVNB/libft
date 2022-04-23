/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:32:16 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/23 08:20:03 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *) s + i) = 0;
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{	
	void	*ptr;

	if (!size || !nmemb)
		return (NULL);
	if (nmemb > INT_MAX)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr != NULL)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/* #include <stdio.h>
int main ()
{
	char *vtr;
	vtr = ft_calloc(10, sizeof(int));
	printf("%s\n", vtr);
} */

/* The calloc() function allocates memory for an array of nmemb elements
  of size bytes each and returns a pointer to the  allocated
memory.   The  memory  is set to zero.  

If nmemb or size is 0,  then calloc() returns either NULL, 
or a unique pointer value that can later be successfully passed to free(). 

 If the multiplication of nmemb and size would result in integer overflow, 
 then calloc() returns an error.  
 
 By contrast, an integer overflow would not  be detected in the following call
  to malloc(), with the result that an incorrectly sized block of memory would be
   allocated: malloc(nmemb * size); */