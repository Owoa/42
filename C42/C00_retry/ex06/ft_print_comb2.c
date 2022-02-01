/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:22:58 by dfricard          #+#    #+#             */
/*   Updated: 2022/01/16 19:33:34 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	b = 0;
	while (a++ <= 97)
	{
		while (b++ <= 98)
		{
			if (a < b)
			{
				ft_putchar(a / 10 + '0');
				ft_putchar(a % 10 + '0');
				ft_putchar(' ');
				ft_putchar(b / 10 + '0');
				ft_putchar(b % 10 + '0');
				if (a != 98)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}	
		}
		b = 0;
	}
}
