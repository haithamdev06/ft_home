/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamonajj <hamonajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 13:33:07 by hamonajj          #+#    #+#             */
/*   Updated: 2026/11/22 13:40:19 by hamonajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_node;

	while (*lst != NULL)
	{
		next_node = *lst->next;
		del(*lst->content);
		free(*lst);
		*lst = next_node;
	}
	*lst = NULL;
}
