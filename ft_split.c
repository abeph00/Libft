/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:12:52 by abertran          #+#    #+#             */
/*   Updated: 2022/10/18 17:26:47 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	countwords(const char *s, char c)
{
	unsigned int	count;

	count = 0;
	while (*s)
	{	
		while (*s && c == *s)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static char	*ft_cpy(size_t i, char const *s, char c, char **split)
{
	int		index;
	size_t	j;

	index = -1;
	j = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split[j]);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**split;

	if (!s)
		return (NULL);
	split = malloc((countwords(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	ft_cpy(i, s, c, split);
	return (split);
}

/*
int main(void)
{
  char const s[] = "hola que tal estas";
  printf("%s", ft_split(s,' '));
}
*/