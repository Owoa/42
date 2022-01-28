/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:59:21 by dfricard          #+#    #+#             */
/*   Updated: 2022/01/27 14:17:24 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
void leintenargesttrestresnul(int i)
{
	i = i;
}
int	main(int ac, char **av)
{
	leintenargesttrestresnul(ac);
	ft_putstr(av[0]);
	return (0);
}
