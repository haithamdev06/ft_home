/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamonajj <hamonajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:13:46 by hamonajj          #+#    #+#             */
/*   Updated: 2026/11/12 14:15:37 by hamonajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lensrc;
	size_t	lendest;

	i = 0;
	lensrc = 0;
	lendest = 0;
	while (src[lensrc] != '\0')
		lensrc++;
	while (dest[lendest] != '\0')
		lendest++;
	if (size <= lendest)
		return (lensrc + size);
	j = lendest;
	while ((src[i] != '\0') && (i < size - lendest - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (lendest + lensrc);
}
