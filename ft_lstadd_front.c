/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:27:25 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/14 22:31:42 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
//test
#include <stdio.h>

int	main(int ac, char **av)
{
	int		A;
	int		B;
	t_list	*instanceA;
	t_list	*instanceB;

	if (ac == 3)
	{
		A = atoi(av[1]);
		B = atoi(av[2]);
		instanceA = ft_lstnew(&A);
		instanceB = ft_lstnew(&B);
		printf("======== list before nodes are added to it ========\n");
		printf("instanceA->content :%d\n", *(int *)instanceA->content);
		printf("instanceA->next    :%p\n", (void *)instanceA->next);
		printf("instanceB->content :%d\n", *(int *)instanceB->content);
		printf("instanceB->next    :%p\n", (void *)instanceB->next);

		ft_lstadd_front(&instanceA, instanceB);
		printf("======== list after nodes are added to it  ========\n");
		printf("instanceA->content :%d\n", *(int *)instanceA->content);
		printf("instanceA->next    :%p\n", (void *)instanceA->next);
		printf("instanceA->next->content :%d\n", *(int *)instanceA->next->content);
		printf("instanceA->next->next    :%p\n", (void *)instanceA->next->next);
		printf("instanceB->content    :%d\n", *(int *)instanceB->content);
	}
	else
	{
		printf("enter two numbers as args to be tested (with atoi)");
		return (-1);
	}
	return(0);
}*/
