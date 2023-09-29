/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialarco <dialarco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:05:34 by dialarco          #+#    #+#             */
/*   Updated: 2023/04/25 11:14:16 by dialarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	ch;

	i = 0;
	s = (unsigned char *) str;
	ch = c;
	while (i < n)
	{
		if (s[i] == ch)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>

int main()
{
	const char str[] = "hola.mundo";
	const char ch = '.';
	char *ret;

	ret = memchr(str, ch, strlen(str));
	printf("%s\n", ret);

	ret = ft_memchr(str, ch, strlen(str));
	printf("%s", ret);

	return (0);
} */