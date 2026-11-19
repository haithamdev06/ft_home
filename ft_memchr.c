/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamonajj <hamonajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 12:48:25 by hamonajj          #+#    #+#             */
/*   Updated: 2026/11/15 13:38:31 by hamonajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*new;
	size_t			i;

	new = (unsigned char *) s;
	i = 0;
	while (new[i] != '\0' && i < n)
	{
		if (new[i] == c)
			return (&new[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	char a[10] = "";
// 	printf("%p", ft_memchr((void *)a, 101, 2));
// 	printf("%p", memchr((void *)a, 101, 2));
// }