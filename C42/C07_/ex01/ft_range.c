/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:03:33 by dfricard          #+#    #+#             */
/*   Updated: 2022/02/01 14:47:36 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stddef.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(*tab) *(max - min));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
int main()
{
	int *cc = ft_range(2 , 4);
	int i = 0;
	if (cc != NULL)
	{
		while (i < 2)
		{
	        	printf("%d",cc[i]);
			i++;
		}
	}
	free(cc);
}
*/
