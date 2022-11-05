/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 04:00:25 by akaabi            #+#    #+#             */
/*   Updated: 2022/10/23 12:29:12 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	size;

	i = -1;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		size = ft_strlen(s) + 1;
	else
		size = len + 1;
	str = ft_calloc(size, sizeof(char));
	if (!str)
		return (NULL);
	if (start >= ft_strlen(s))
		return (str);
	while (++i < len && s[start + i])
		str[i] = s[start + i];
	return (str);
}
