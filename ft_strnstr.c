/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:49:20 by abertran          #+#    #+#             */
/*   Updated: 2022/10/06 16:42:26 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	h;

	n = 0;
	h = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[h] != '\0' && h < len)
	{
		if (haystack[h] == needle[n])
		{
			while (haystack[h + n] == needle[n] && h + n < len)
			{
				if (needle[n + 1] == '\0')
					return ((char *)haystack + h);
				n++;
			}
			n = 0;
		}
		h++;
	}
	return (0);
}
