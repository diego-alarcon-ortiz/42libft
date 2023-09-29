/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialarco <dialarco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:22:38 by dialarco          #+#    #+#             */
/*   Updated: 2023/04/26 11:01:51 by dialarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*res;
	unsigned char	*s;

	i = 0;
	res = (unsigned char *) str1;
	s = (unsigned char *) str2;
	if (s > res)
		ft_memcpy(res, s, n);
	else if (s < res)
	{
		while (n > 0)
		{
			res[n - 1] = s[n - 1];
			n--;
		}
	}
	else if (n == 0 || s == res)
		return (str1);
	str1 = res;
	return (str1);
}

/* #include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 1);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
} */