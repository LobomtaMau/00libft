/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:00:22 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/12 14:38:09 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*p_dest;
	const char	*p_src;
	size_t		len;

	p_dest = dest;
	p_src = src;
	len = 0;
	if (p_dest < p_src)
	{
		len = n;
		while (len > 0)
			len--;
			p_dest[len] = p_src[len];
	}
	else
	{
		len = 0;
		while (len < n)
		{
			p_dest[len] = p_src[len];
			len++;
		}
	}
	return (dest);
}
