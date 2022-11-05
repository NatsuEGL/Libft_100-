/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:10:51 by akaabi            #+#    #+#             */
/*   Updated: 2022/11/02 23:46:15 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[i])
		return ((char *)haystack);
	if (!haystack && !len)
		return (0);
	while (((char *)haystack)[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && haystack[i] && (j + i) < len)
		{
			if (!needle[j + 1])
				return (((char *)haystack) + i);
			j++;
		}
		i++;
	}
	return (0);
}
