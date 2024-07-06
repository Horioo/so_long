/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajorge-p <ajorge-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:34:27 by ajorge-p          #+#    #+#             */
/*   Updated: 2023/10/19 13:36:57 by ajorge-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	i = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = (char *)malloc(end - start + 1);
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i++] = s1[start++];
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	printf("%s", ft_strtrim("\0", " \n\t"));
}
*/
//Linha 28 - Contador ate o char Set deixar de existir
//Linha 31 - Contador a comecar no fim e ate o Set deixar de existir
