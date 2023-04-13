/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:30:55 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/13 12:57:28 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_len)
	{
		return (ft_strdup(""));
	}
	sub = (char *)malloc(sizeof(len + 1));
	{
		if (!sub)
		{
			return (NULL);
		}
	}
	s_len = 0;
	while (s_len < len && s[start + s_len])
	{
		sub[s_len] = s[start + s_len];
		s_len++;
	}
	sub[s_len] = '\0';
	return (sub);
}
