/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 01:01:51 by dfricard          #+#    #+#             */
/*   Updated: 2022/01/20 14:53:08 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((unsigned int)j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include<stdio.h>

int main()
{
	char src[20] = "Hey";
	char dest[100] = "ZESH CEST LA PREMIERE CHAINE";

	printf("%s",ft_strncat(dest, src, 20));
}
*/
