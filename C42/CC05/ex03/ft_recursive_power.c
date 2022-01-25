/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:24:02 by dfricard          #+#    #+#             */
/*   Updated: 2022/01/25 17:49:06 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	else
	{
		return nb * ft_recursive_power(nb, power -1);
	}
}
#include<stdio.h>
int main()
{
	printf("%d",ft_recursive_power(3,5));
}
