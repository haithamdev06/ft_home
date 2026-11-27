/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamonajj <hamonajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:22:46 by hamonajj          #+#    #+#             */
/*   Updated: 2026/11/27 14:33:34 by hamonajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// #include <stdio.h>

// int main()
// {
// 	char c[26] = "hello world this is a test";
// 	void *s = (void *)c;
// 	ft_bzero(s, 15);
//  printf("%s", c);
// 	return 0;
// }