/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 23:12:32 by manuelma          #+#    #+#             */
/*   Updated: 2024/10/14 17:32:06 by manuelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	start_at(char const *s1, int s1_len, char const *set, int set_len)
{
	int	start;
	int	i;

	start = 0;
	while (start < s1_len)
	{
		i = 0;
		while (i < set_len && s1[start] != set[i])
			i++;
		if (s1[start] == set[i])
			start++;
		else
			break ;
	}
	return (start);
}

static int	search_end(char const *s1, int s1_len, char const *set, int set_len)
{
	int	end;
	int	i;

	end = s1_len - 1;
	while (end >= 0)
	{
		i = 0;
		while (i < set_len && s1[end] != set[i])
			i++;
		if (s1[end] == set[i])
			end--;
		else
			break ;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*output;
	int		s1_len;
	int		set_len;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	start = start_at(s1, s1_len, set, set_len);
	end = search_end(s1, s1_len, set, set_len);
	output = ft_substr(s1, start, end - start + 1);
	if (!output)
		return (NULL);
	return (output);
}
/*
//test
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*str;

	if (ac == 3)
	{
		str = ft_strtrim(av[1], av[2]);
		printf("result:%s\n", str);
	}
}
*/
