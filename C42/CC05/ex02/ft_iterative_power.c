/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:52:43 by dfricard          #+#    #+#             */
/*   Updated: 2022/01/25 17:21:53 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int	i;
	int	ret;
	
	ret = 1 ;
	i = 0;
	if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		ret *= nb;
		i++;	
	}
	return (ret);
}
#include<stdio.h>
int main ()
{
	printf("%d", ft_iterative_power(3,0));
}
