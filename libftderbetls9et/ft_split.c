/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:08:30 by akaabi            #+#    #+#             */
/*   Updated: 2022/11/04 17:06:57 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_c(const char str, const char c)
{
	if (str == c)
		return (1);
	return (0);
}

static char	*trim(char const *s1, char const set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*p;

	i = 0;
	if (!s1)
		return (0);
	j = ft_strlen(s1) - 1;
	while (*s1 && (ft_c(set, (unsigned char)s1[i])))
		i++;
	while (j && *s1 && (ft_c(set, (unsigned char)s1[j])))
		j--;
	len = j - i + 1;
	if (j > i)
	{
		p = ft_substr(s1, i, len);
	}
	else
	p = ft_substr(s1, i, 1);
	return (p);
}

static int	word_count(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	if (!s)
		return (0);
	count = 1;
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] && s[i] == c)
				i++;
			i--;
		}
		i++;
	}
	return (count);
}

static char	**allocation(char **s, size_t i)
{
	size_t	t;

	t = 0;
	while (t < i)
	{
		free(s[t]);
		t++;
	}
	free(s);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**m;
	int		i;
	int		start;
	int		end;

	str = trim(s, c);
	if (!str)
		return (0);
	m = (char **)ft_calloc((word_count(str, c) + 1), sizeof(char *));
	i = -1;
	start = 0;
	end = 0;
	while (str[++i] && i < word_count(str, c))
	{
		while (str[end] && str[end] != c)
			end++;
		m[i] = ft_substr(str, start, end - start);
		if (!m[i])
			return (allocation(m, i));
		while (str[end] == c)
			end++;
		start = end;
	}
	return (free(str), m);
}
