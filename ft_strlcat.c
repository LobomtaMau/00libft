/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:54:40 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/14 10:59:59 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	i;
	size_t	j;

	lensrc = ft_strlen(src);
	i = 0;
	while (dest[i] && i < dstsize)
	{
		i++;
	}
	if (i == dstsize)
	{
		return (dstsize + lensrc);
	}
	j = 0;
	while (src[j] && i + j < dstsize - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (lensrc + i);
}
