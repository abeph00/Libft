/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:02:01 by abertran          #+#    #+#             */
/*   Updated: 2022/10/06 17:25:46 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Reserva un espacio en memoria para # de objetos (count) de un tamaño de
  * bytes (size) determinado para cada uno.*/

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	if (count == 0 || size == 0)
		return (malloc(0));
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