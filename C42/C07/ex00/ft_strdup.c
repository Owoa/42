/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:18:47 by dfricard          #+#    #+#             */
/*   Updated: 2022/01/27 18:02:58 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include<stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	char	*str;
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(src);
	str = (char*)malloc(sizeof(*src)*len + 1);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
	char *str="salut";
	char *cc = ft_strdup(str);
	printf("%s",cc);
	free(cc);
}
