/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamonajj <hamonajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:09:59 by hamonajj          #+#    #+#             */
/*   Updated: 2026/11/19 14:20:37 by hamonajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	calc(int n)
{
	int		i;
	long	nb;

	i = 0;
	nb = n;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nb;
	char	*s;

	i = calc(n);
	nb = n;
	s = malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	if (nb == 0)
		s[0] = '0';
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	s[i--] = '\0';
	while (nb > 0)
	{
		s[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = ft_itoa(123456);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }