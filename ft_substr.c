/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:44:39 by abertran          #+#    #+#             */
/*   Updated: 2022/09/27 17:47:21 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	u;

	subs = (char *)malloc(len + 1);
	if (!s || !subs)
		return (0);
	i = start;
	u = 0;
	while (i < ft_strlen(s) && u < len)
			subs[u++] = s[i++];
	subs[u] = '\0';
	return (subs);
}
