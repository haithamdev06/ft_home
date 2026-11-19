/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamonajj <hamonajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 10:41:35 by hamonajj          #+#    #+#             */
/*   Updated: 2026/11/19 11:03:33 by hamonajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const	char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*s11;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	s11 = malloc(sizeof(char) * (i + j + 1));
	j = 0;
	if (!s11)
		return (NULL);
	while (j < i)
	{
		s11[j] = s1[j];
		j++;
	}
	j = 0;
	while (s2[j])
	{
		s11[i] = s2[j];
		j++;
		i++;
	}
	s11[i] = '\0';
	return (s11);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str1 = "Hello, ";
// 	char	*str2 = "World!";
// 	char	*joined;

// 	joined = ft_strjoin(str1, str2);
// 	if (joined)
// 	{
// 		printf("Test 1: %s\n", joined);
// 		free(joined);
// 	}
// 	joined = ft_strjoin("", "Only second");
// 	if (joined)
// 	{
// 		printf("Test 2: %s\n", joined);
// 		free(joined);
// 	}
// 	joined = ft_strjoin("", "");
// 	if (joined)
// 	{
// 		printf("Test 3: '%s'\n", joined);
// 		free(joined);
// 	}
// 	return (0);
// }