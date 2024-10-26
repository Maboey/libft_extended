/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:36:20 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/14 21:25:38 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*instance;

	instance = malloc(sizeof(t_list));
	if (!instance)
		return (NULL);
	instance->content = content;
	instance->next = NULL;
	return (instance);
}
/*
//test
#include <stdio.h>
#include <stdlib.h>

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
		printf("instanceA->content = %d\n", *(int *)instanceA->content);
		instanceB = ft_lstnew(&B);
		printf("instanceB->content = %d\n", *(int *)instanceB->content);
		printf("next instance = %p\n", (void *)instanceB->next);
	}
	else
	{
		printf("enter two numbers as args to be tested (with atoi)");
		return (-1);
	}
	return(0);
}
*/
