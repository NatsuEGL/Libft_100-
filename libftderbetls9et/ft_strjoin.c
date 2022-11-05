/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 05:05:44 by akaabi            #+#    #+#             */
/*   Updated: 2022/10/30 04:52:52 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		str1;
	int		str2;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	str1 = ft_strlen (s1);
	str2 = ft_strlen (s2);
	p = malloc(sizeof(char) * (str1 + str2) + 1);
	if (!p)
		return (0);
	ft_memcpy(p, s1, str1);
	ft_memcpy((p + str1), s2, str2);
	p[str1 + str2] = '\0';
	return (p);
}
