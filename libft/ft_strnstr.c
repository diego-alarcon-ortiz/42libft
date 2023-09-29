/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialarco <dialarco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:55:29 by dialarco          #+#    #+#             */
/*   Updated: 2023/04/26 14:09:22 by dialarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	str2_n;

	str2_n = ft_strlen(str2);
	if (str2_n == 0)
		return ((char *)str1);
	i = 0;
	while (str1[i] != '\0' && i < n)
	{
		if (str1[i] == str2[0])
		{
			j = 1;
			while (str2[j] != '\0' && str1[i + j] == str2[j] && i + j < n)
				j++;
			if (str2[j] == '\0')
				return ((char *)&str1[i]);
		}
		i++;
	}
	return (NULL);
}
