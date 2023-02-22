/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:23:09 by abertran          #+#    #+#             */
/*   Updated: 2022/10/18 18:18:04 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* reserva con malloc un nuevo string, basado en la union
de los dos strings dados como parámetros */

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		p;
	int		s;
	char	*new;

	if (!s1 || !s2)
		return (NULL);
	new = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (NULL);
	p = 0;
	while (s1[p] != '\0')
	{
		new[p] = s1[p];
		p++;
	}
	s = 0;
	while (s2[s] != '\0')
	{
		new[p++] = s2[s++];
	}
	new[p] = '\0';
	return (new);
}
/*
int main (void)
{
	char const s1[] = "hola que tal";
	char const s2[] = "bien y tu";
	printf("%s", ft_strjoin(s1, s2));
}
*/
