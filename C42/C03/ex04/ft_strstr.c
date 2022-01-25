/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:57:15 by dfricard          #+#    #+#             */
/*   Updated: 2022/01/25 10:11:01 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		while (to_find[j] == str[i])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i - j]);
			}
			i++;
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char a[100] = "salut cest cool";
	char b[100] = "cool";

	printf("%s", ft_strstr(a,b));
	return 0;
}
*/
