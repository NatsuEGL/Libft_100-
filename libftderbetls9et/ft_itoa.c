/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 09:35:20 by akaabi            #+#    #+#             */
/*   Updated: 2022/10/30 03:56:31 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*s;
	size_t		size_n;
	long		nb;

	size_n = ft_count(n);
	nb = n;
	s = ft_calloc(sizeof(char), size_n + 1);
	while (!s)
		return (0);
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	if (!nb)
		s[0] = '0';
	while (nb)
	{
		s[--size_n] = (nb % 10) + '0';
		nb /= 10;
	}
	return (s);
}
