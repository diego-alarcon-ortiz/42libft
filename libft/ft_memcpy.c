/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialarco <dialarco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:40:17 by dialarco          #+#    #+#             */
/*   Updated: 2023/04/26 14:06:38 by dialarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (dest == src || !n)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/* #include <stdio.h>

int main () {
	const char src[50] = "origen";
	char dest[50] = "destino";
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, 3);
	printf("After memcpy dest = %s\n", dest);

	return(0);
} */