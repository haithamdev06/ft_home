/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamonajj <hamonajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:01:07 by hamonajj          #+#    #+#             */
/*   Updated: 2026/11/12 15:13:48 by hamonajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	if (c == 0)
		return ((char *)s);
	while (s[i])
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	return ((char *)&s[j]);
}
// #include <stdio.h>

// int main()
// {
// 	const char *a = "hello A test test";
// 	printf("%s", ft_strrchr(a, 116));
// }
