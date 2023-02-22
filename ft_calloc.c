/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:02:01 by abertran          #+#    #+#             */
/*   Updated: 2022/10/18 17:25:57 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* asigna memoria y la inicializa y rellena con zero */

void	*ft_calloc(size_t count, size_t size)
/*cantidad de elementos y tamaño */
{
	char	*ptr;

	if (count && ((SIZE_MAX / count) < size))
		return (NULL);
	ptr = malloc (count * size);
	if (!ptr)
		return (NULL);
	else
		ft_bzero(ptr, count * size);
	return (ptr);
}

/*int   main(void)
 33 {
 34     printf("cadena: %p\n", ft_calloc(0, 1));
 35 }*/