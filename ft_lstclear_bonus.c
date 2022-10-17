/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:01:26 by abertran          #+#    #+#             */
/*   Updated: 2022/10/10 19:41:14 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nodo;
	t_list	*tmp;

	nodo = *lst;
	while (nodo)
	{
		tmp = nodo->next;
		del(nodo->content);
		free(nodo);
		nodo = tmp;
	}
	*lst = NULL;
}
