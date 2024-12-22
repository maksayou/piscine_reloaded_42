/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:09:55 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/10 16:54:00 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*dest;

	i = 0;
	size = ft_strlen(src);
	dest = malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (NULL);
	dest[size + 1] = '\0';
	while (size >= 0)
	{
		dest[size] = src[size];
		size--;
	}
	return (dest);
}
