/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamonajj <hamonajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 10:28:41 by hamonajj          #+#    #+#             */
/*   Updated: 2026/11/28 11:32:46 by hamonajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static size_t	ft_strlen(const	char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	p = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!p)
		return (NULL);
	while (i < len && s[start])
	{
		p[i] = s[start];
		start++;
		i++;
	}
	p[i] = '\0';
	return (p);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str = "Hello, 42 World!";
// 	char	*sub;

// 	sub = ft_substr(str, 7, 50);
// 	if (sub)
// 	{
// 		printf("Original: %s\n", str);
// 		printf("Substring: %s\n", sub);
// 		free(sub);
// 	}
// 	return (0);
// }
