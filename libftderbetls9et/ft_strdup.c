/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 02:48:24 by akaabi            #+#    #+#             */
/*   Updated: 2022/10/30 04:07:55 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*f;
	int		n;
	int		i;

	n = ft_strlen(s1);
	f = malloc(sizeof(char) * (n + 1));
	if (!f)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		f[i] = s1[i];
		i++;
	}
	f[i] = '\0';
	return (f);
}
