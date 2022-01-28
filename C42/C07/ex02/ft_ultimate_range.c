/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:54:39 by dfricard          #+#    #+#             */
/*   Updated: 2022/01/27 19:26:42 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
#include<stddef.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;
	int *ptr = NULL ;
	
	if(min >= max)
		return ptr;
	tab = (int*)malloc(sizeof(*tab)*(max + 1));
	i = 0;	
	while(i < max)
	{
		tab[i] = min + 1;
		i++;
	}
	return (tab);
}

int main()
{
	int *cc = ft_range(0,200);
	int i = 0;
	while (cc[i])
	{
	        printf("%d",cc[i]);
		i++;
	}
	free(cc);
}
}
