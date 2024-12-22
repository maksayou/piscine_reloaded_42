/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:57:34 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/08 18:46:53 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	s;

	s = 1;
	if (argc > 1)
	{
		while (s < argc)
		{
			while (*argv[s])
			{
				ft_putchar(*argv[s]);
				argv[s]++;
			}
			ft_putchar('\n');
			s++;
		}
	}
	return (0);
}	
