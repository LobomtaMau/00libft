/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:54:40 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/12 12:09:31 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstize)
{
	size_t	lensrc;
	size_t	i;
	size_t	j;

	lensrc = strlen(src);
	i = 0;
	if (dstize == 0)
		return (lensrc);
	while (dest[i] && dstize)
	{
		dstize--;
		i++;
	}
	j = 0;
	while (src[j] && dstize)
	{
		dest[i + j] = src[j];
		j++;
		dstize--;
	}
	if (dest != 0)
	{
		dest[i + j] = '\0';
	}
	return (lensrc + i);
}
