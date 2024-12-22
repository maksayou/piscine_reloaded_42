/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:02:25 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/08 18:45:12 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

void	ascii_ordre(char **s1, int nb)
{
	int		a;
	int		b;
	char	*s2;

	a = 1;
	while (a < (nb - 1))
	{
		b = 0;
		while (s1[a][b] == s1[a + 1][b])
			b++;
		if (s1[a][b] > s1[a + 1][b])
		{
			s2 = s1[a];
			s1[a] = s1[a + 1];
			s1[a + 1] = s2;
			a = 0;
		}
		a++;
	}
}

void	ft_print(char **s1, int nb)
{
	int	c;
	int	d;

	if (nb > 1)
	{
		c = 1;
		while (c < nb)
		{
			d = 0;
			while (s1[c][d] != '\0')
			{
				ft_putchar(s1[c][d]);
				d++;
			}
			ft_putchar('\n');
			c++;
		}
	}
}

int	main(int argc, char **argv)
{
	ascii_ordre(argv, argc);
	ft_print (argv, argc);
	return (0);
}
