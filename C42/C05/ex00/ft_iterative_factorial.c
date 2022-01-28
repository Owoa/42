/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:18:42 by dfricard          #+#    #+#             */
/*   Updated: 2022/01/28 17:21:35 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ret;

	ret = nb;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i < nb)
	{
		ret *= i;
		i++;
	}
	return (ret);
}
