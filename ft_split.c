/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:23:16 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/14 13:59:41 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			count++;
			while (*s && *s != c)
			{
				s++;
			}
		}
	}
	return (count);
}

static int	ft_word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		n_words;
	int		i;

	if (!s)
		return (NULL);
	n_words = ft_count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < n_words)
	{
		while (*s && *s == c)
			s++;
		res[i] = ft_substr(s, 0, ft_word_len(s, c));
		if (!res[i])
			return (NULL);
		s += ft_word_len(s, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
