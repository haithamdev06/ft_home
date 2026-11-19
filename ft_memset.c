/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamonajj <hamonajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 13:48:22 by hamonajj          #+#    #+#             */
/*   Updated: 2026/11/15 12:44:31 by hamonajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;

	a = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		a[i] = c;
		i++;
	}
	return (a);
}

// #include <stdio.h>

// int main()
// {
// 	char s[5] = "hello";
// 	void *newS = (void *)s;
// 	ft_memset(newS, 122, 5);
// 	printf("%s", s);
// }