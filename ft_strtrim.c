/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:51:38 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/14 11:04:43 by mbaptist         ###   ########.fr       */
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
