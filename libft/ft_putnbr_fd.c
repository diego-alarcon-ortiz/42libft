/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialarco <dialarco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:26:27 by dialarco          #+#    #+#             */
/*   Updated: 2023/07/20 15:26:37 by dialarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;
	char			c;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	nb = n;
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
		nb %= 10;
	c = nb + '0';
	write(fd, &c, 1);
}
