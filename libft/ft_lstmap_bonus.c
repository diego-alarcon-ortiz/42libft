/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialarco <dialarco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:16:08 by dialarco          #+#    #+#             */
/*   Updated: 2023/07/20 16:16:09 by dialarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*temp;

	result = 0;
	while (lst)
	{
		temp = (t_list *)malloc(sizeof(t_list));
		if (!temp)
		{
			ft_lstclear(&result, del);
			return (0);
		}
		temp->content = f(lst->content);
		temp->next = NULL;
		ft_lstadd_back(&result, temp);
		lst = lst->next;
	}
	return (result);
}
