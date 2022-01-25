/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:44:19 by dfricard          #+#    #+#             */
/*   Updated: 2022/01/20 01:01:16 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int	length;
	int	j;

	length = ft_strlen(src);
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < length)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}
