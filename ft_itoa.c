/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struf <struf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:52:24 by struf             #+#    #+#             */
/*   Updated: 2023/04/13 16:04:41 by struf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nblen(int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		len++;
	}
	while (nb)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		res;
	char	*str;

	len = ft_nblen(n);
	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
	{
		return (NULL);
	}
	str[len] = 0;
	res = n;
	if (n < 0)
	{
		str[0] = '-';
		res = -n;
	}
	if (res == 0)
	{
		str[0] = '0';
	}
	while (len && res)
	{
		len--;
		str[len] = res % 10 + '0';
		res = res / 10;
	}
	return (str);
}
