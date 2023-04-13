/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:51:38 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/13 13:21:34 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*start;
	char const	*end;

	if (!s1 || !set)
	{
		return (NULL);
	}
	start = s1;
	while (*start && ft_strchr(set, *start))
	{
		start++;
	}
	end = s1 + ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, *end))
	{
		end--;
	}
	return (ft_substr(start, 0, end - start + 1));
}

#include <stdio.h>

int	main(void)
{
	const char	*str;
	const char	*set;
	char		*res;

	str = "Vammos Nisso cammandro";
	set = "m";
	res = ft_strtrim(str, set);
	printf("antes: %s\n", str);
	printf("Depois do corte: %s\n", res);
	free(res);
	return (0);
}
