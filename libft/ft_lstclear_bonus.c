/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialarco <dialarco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:37:18 by dialarco          #+#    #+#             */
/*   Updated: 2023/07/20 15:42:53 by dialarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*next;

	if (lst && *lst && del)
	{
		curr = *lst;
		while (curr)
		{
			next = curr->next;
			(*del)(curr->content);
			free(curr);
			curr = next;
		}
		*lst = NULL;
	}
}
