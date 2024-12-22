/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:09:01 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/05 18:34:14 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}
/*
int	main(void)
{
	int	k;
	int	l;

	k = 4;
	l = 2;

	printf("%d",k);
	printf("%d",l);
	ft_swap(&k, &l);
	printf("%d", k);
	printf("%d",l);
	return (0);
}*/
