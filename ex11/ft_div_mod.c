/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:21:53 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/05 18:33:52 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	k;
	int	l;
	int	div1;
	int	mod1;

	k = 5;
	l = 2;
	div1 = 0;
	mod1 = 0;
	ft_div_mod(k, l, &div1, &mod1);
	printf("%d\n", div1);
	printf("%d\n", mod1);
	return (0);
}*/
