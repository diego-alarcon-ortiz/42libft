/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialarco <dialarco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:53:26 by dialarco          #+#    #+#             */
/*   Updated: 2023/05/22 11:42:15 by dialarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *src, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if (!src)
		return (NULL);
	if (start >= ft_strlen(src))
		return (ft_strdup(""));
	if (len > ft_strlen(src) - start)
		len = ft_strlen(src) - start;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] && i < len)
	{
		dest[i] = src[i + start];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include <stdio.h>

int main()
{
	char src[] = "abcc";
 
	printf("%s\n", ft_substr(src, 2, 2));

    return 0;
} */