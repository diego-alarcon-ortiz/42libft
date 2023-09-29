/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialarco <dialarco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:11:34 by dialarco          #+#    #+#             */
/*   Updated: 2023/07/20 15:12:42 by dialarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_get_len(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (1 + ft_get_len(-(n / 10)));
	return (ft_get_len(n / 10) + 1);
}

static void	ft_itoa_rec(char *str, int n, int *i)
{
	if (n == 0)
		return ;
	ft_itoa_rec(str, n / 10, i);
	if (n < 0)
		str[(*i)++] = '0' - (n % 10);
	else
		str[(*i)++] = '0' + (n % 10);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	if (n == 0)
		return (ft_strdup("0"));
	len = ft_get_len(n);
	if (n < 0)
		len++;
	str = (char *)malloc(sizeof(char) * (len));
	if (!str)
		return (NULL);
	i = 0;
	if (n < 0)
		str[i++] = '-';
	ft_itoa_rec(str, n, &i);
	str[i] = '\0';
	return (str);
}
