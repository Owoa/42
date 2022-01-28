/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:03:33 by dfricard          #+#    #+#             */
/*   Updated: 2022/01/27 19:24:00 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stddef.h>
#include <stdlib.h>
int *ft_range(int min, int max)
{

	int i;
	int *tab;
	int *ptr = NULL ;
	
	if(min >= max)
		return ptr;
	if (min < 0 && max < 0)
		return (ptr);	
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
	int *cc = ft_range(20,10);
	int i = 0;
	while (cc[i])
	{
	        printf("%d",cc[i]);
		i++;
	}
	free(cc);
}
