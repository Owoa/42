/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:03:33 by dfricard          #+#    #+#             */
/*   Updated: 2022/01/29 16:16:30 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *tab;

	tab = NULL;
	i = 0;	
	if (min >= max)
		return (tab);
	tab = malloc(sizeof(*tab) * max + 1);
	while (i < (max - min))
	{
		tab[i] = min;
		min++;
		i++;
	}
	tab[i] = 0 ;	
	return (tab);
}

int main()
{
	int *cc = ft_range(1 , 10);
	int i = 0;
	while (cc[i])
	{
	        printf("%d",cc[i]);
		i++;
	}
	free(cc);
}
