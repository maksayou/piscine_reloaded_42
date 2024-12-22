/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:50:11 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/11 16:45:45 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	print_file(int nb)
{
	char	c;

	while (read(nb, &c, 1) != 0)
		write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	a;

	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write (2, "Too many arguments.\n", 20);
		return (1);
	}
	a = open(argv[1], O_RDONLY);
	if (a == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	print_file(a);
	close(a);
	return (0);
}
