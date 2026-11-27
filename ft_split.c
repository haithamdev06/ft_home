/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamonajj <hamonajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:02:39 by hamonajj          #+#    #+#             */
/*   Updated: 2026/11/27 13:58:35 by hamonajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (size > 0)
	{
		while (j < size - 1 && src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}

static size_t	ft_strlen(const	char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**s2;

	i = 0;
	j = 0;
	s2 = malloc(1 * (ft_strlen(s) + 1));
	if (!s2)
		return (NULL);
	while (s[i])
	{
		s2[i] = malloc();
		if (s[i + 1] == c)
		{
			ft_strlcpy(s2[j], s, i);
			j++;
		}
		i++;
	}
	return (s2);
}

int	main(void)
{
	int		j = 0;
	int		i = 0;
	char	*s1 = "hello world this is a test";
	char	**s2 = ft_split(s1, ' ');

	while (s2[i])
	{
		j = 0;
		while (s2[i][j])
		{
			printf("%c", s2[i][j]);
			j++;
		}
		i++;
	}
	return (0);
}
