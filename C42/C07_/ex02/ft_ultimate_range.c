/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:54:39 by dfricard          #+#    #+#             */
/*   Updated: 2022/02/01 14:29:59 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(*tab) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
}

/*
int main()
{
	int	*cc;
	int	i;
	i = 0;
	int size = ft_ultimate_range(&cc, 2,5);
	if (size != 0)
	{
		printf("size = %d\n",size);
		while (i < 3)
		{
			printf("%d\n", cc[i]);
			i++;
		}
	}
}
*/
