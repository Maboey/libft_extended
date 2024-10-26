/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:14:43 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/14 23:24:31 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*temp;
	t_list	*new;
	t_list	*instance;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		temp = f(lst->content);
		instance = ft_lstnew(temp);
		if (!instance)
		{
			del(temp);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, instance);
		lst = lst->next;
	}
	return (new);
}
