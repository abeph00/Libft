/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:00:12 by abertran          #+#    #+#             */
/*   Updated: 2022/10/10 20:15:47 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*primer;
	t_list	*new;

	if (!f)
		return (NULL);
	primer = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&primer, del);
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&primer, new);
		lst = lst->next;
	}
	return (primer);
}
