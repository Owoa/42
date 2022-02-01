/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:43:39 by dfricard          #+#    #+#             */
/*   Updated: 2022/02/01 14:01:24 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_create_malloc(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	if (size == 0)
	{
		str = malloc(sizeof(*str) * 1);
		return (str);
	}
	while (i <= size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	str = malloc(sizeof(*str) * len + 1);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;	
	char	*str;

	i = 0;
	str = ft_create_malloc(size, strs, sep);
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
int main()
{
	char	*cc[4];	
	char	*test;
	cc[0] = "salut";
	cc[1] = "cest";
	cc[2] = "cool";
	cc[3] = ":)";
	
	test = ft_strjoin(4, cc, " *** ");
	printf("%s", test);
	free(test);
}
*/
