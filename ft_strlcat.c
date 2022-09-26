/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:52:17 by abertran          #+#    #+#             */
/*   Updated: 2022/09/26 13:00:38 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Añade src al final de dst. Concatena strings con una longitud limitada y lo
termina en NULL siempre que el dstsize sea mayor a el string original de dst.
Retorna la longitud del string que esta tratando crear. */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
	dst[c] = src[d];
	d++;
	c++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
/*
int main(void)
{
    char src[] = "hola";
    char dst[] = "adios";
    printf("%zu", ft_strlcat(dst, src, 3));
}
*/