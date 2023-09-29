/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialarco <dialarco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:23:51 by dialarco          #+#    #+#             */
/*   Updated: 2023/07/20 15:23:53 by dialarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{	
	int	i;

	if (s)
	{
		i = 0;
		while (s[i])
			i++;
		write(fd, s, i);
	}
}
