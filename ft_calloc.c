/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamonajj <hamonajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 13:46:16 by hamonajj          #+#    #+#             */
/*   Updated: 2026/11/15 17:00:59 by hamonajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	if (size != 0 && nmemb > (size_t) - 1 / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*arr = ft_calloc(5, sizeof(int));
// 	int	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	return (0);
// }