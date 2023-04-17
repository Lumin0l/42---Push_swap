/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:33:04 by ide-la-i          #+#    #+#             */
/*   Updated: 2022/12/20 17:17:00 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	unsigned int	i;
	unsigned int	wordcount;

	i = 0;
	wordcount = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			wordcount++;
		while (s[i] != c && s[i] != '\0')
				i++;
	}
	return (wordcount);
}

static unsigned int	ft_wordlen(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char	**ft_free(char **str, unsigned int j)
{
	while (j-- > 0)
		free(str[j]);
	free(str);
	return (NULL);
}

static char	**ft_populate(char const *s, char **str, char c)
{
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;

	len = 0;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			len = ft_wordlen(&s[i], c);
			str[j] = ft_substr(s, i, len);
			if (!str[j])
				return (ft_free(str, j));
			i += len;
			j++;
		}
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	return (ft_populate(s, str, c));
}
