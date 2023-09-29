/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialarco <dialarco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:12:10 by dialarco          #+#    #+#             */
/*   Updated: 2023/04/25 10:56:08 by dialarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (((char *)s)[i] != '\0')
	{
		if (((char *)s)[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (((char *)s)[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

/* #include <stdio.h>
int	main(void)
{
	char *str = "hola";
	int	c = 'j';
	printf("%s\n", ft_strchr(str, c));
} */