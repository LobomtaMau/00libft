/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:40:38 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/12 16:08:18 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s_new;
	unsigned int	i;

	if (!s || !f)
	{
		return (NULL);
	}
	s_new = (char *)malloc(ft_strlen(s) + 1);
	if (!s_new)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		s_new[i] = (*f)(i, s[i]);
		i++;
	}
	s_new[i] = '\0';
	return (s_new);
}
