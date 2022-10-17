/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:44:39 by abertran          #+#    #+#             */
/*   Updated: 2022/10/12 14:34:46 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	if (len <= 0 || start > i)
		return (ft_strdup(""));
	if (i - start < len)
		len = i - start;
	ptr = malloc ((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, (char *)(s + start), len + 1);
	return (ptr);
}
/*
int	main(void)
{
	char const	s[] = "oftalmologo";

	printf("%s", ft_substr(s, 1, 3));
}
*/