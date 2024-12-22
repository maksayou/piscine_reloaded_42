/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:28:58 by mayoucha          #+#    #+#             */
/*   Updated: 2024/11/08 15:47:35 by mayoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	ft_putchar(str[i]);
}

/*int	main(void)
{
	char	*a;

	a = "Hello universe and world and all that";
	ft_putstr(a);
	printf("%s",a);
	return(0);
}*/
