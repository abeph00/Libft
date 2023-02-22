/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:44:39 by abertran          #+#    #+#             */
/*   Updated: 2022/10/18 18:09:41 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Reserva con malloc un nuevo string, se basa en la union de dos strings */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;

	if (!s)
		return (0);
	i = ft_strlen(s);
	if (len <= 0 || start > i)
		return (ft_strdup(""));
	if (i - start < len)
		len = i - start;
	ptr = malloc ((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, (char *)(s + start), len + 1);
	return (ptr);
}
/*
int	main(void)
{
	char const	s[] = "";

	printf("%s\n", ft_substr(s, 0, 12));
}
*/