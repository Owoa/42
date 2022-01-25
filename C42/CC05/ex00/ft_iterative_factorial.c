/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:18:42 by dfricard          #+#    #+#             */
/*   Updated: 2022/01/25 10:43:30 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_iterative_factorial(int nb)
{
	int	i;
	int	ret;

	ret = nb;	
	i = 1;
	while (i < nb)
	{
		ret *= i;
		i++;
	}
	return (ret);
}

int main()
{
	printf("%d\n",ft_iterative_factorial(10));
}
