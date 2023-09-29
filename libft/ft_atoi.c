/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialarco <dialarco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:11:01 by dialarco          #+#    #+#             */
/*   Updated: 2023/05/08 12:35:56 by dialarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	signo;
	int	i;

	result = 0;
	signo = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		signo = -1;
		str++;
	}
	else if (str[i] == '+')
		str++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result) * 10 + (str[i] - '0');
		i++;
	}
	return (signo * result);
}
