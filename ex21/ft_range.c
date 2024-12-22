/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:13:44 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/10 17:01:25 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	array = (int *) malloc(sizeof(int) * (max - min) + 1);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	array[i] = 0;
	return (array);
}
/*int	main(void)
{
	int	*test_array;
	int	i;

	test_array = ft_range(8, 15);
	i = 0;
	while (i != 0)
	{
		printf("%d\n", test_array[i]);
		i++;
	}
	free(test_array);
	return (0);
}*/
