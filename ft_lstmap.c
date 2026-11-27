/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamonajj <hamonajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 13:46:52 by hamonajj          #+#    #+#             */
/*   Updated: 2026/11/27 13:56:37 by hamonajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*neww;
	int		i;

	i = 0;
    while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
		i++;
	}
	neww = malloc(size(t_list) * i);
	if (!neww)
		return (NULL);
	return (neww);
	del(lst->content);
	free(lst);
}
