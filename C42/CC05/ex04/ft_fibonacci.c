/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:51:29 by dfricard          #+#    #+#             */
/*   Updated: 2022/01/25 18:35:18 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if(index == 0)
	{
		return 0;
	}
	else if (index == 1 )
	{
		return 1;
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

#include<stdio.h>
int main ()
{
	printf("%d", ft_fibonacci(16));
}
