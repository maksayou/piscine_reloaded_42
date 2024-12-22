/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:35:29 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/10 16:44:21 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	result = nb--;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*int	main(void)
{
	printf("%d", ft_iterative_factorial(9));
	return (0);
}*/
