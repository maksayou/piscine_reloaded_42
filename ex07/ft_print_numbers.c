/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:36:27 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/08 15:46:21 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	n;

	n = 48;
	while (n <= 57)
	{
		ft_putchar(n);
		n++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return 0;
}*/
