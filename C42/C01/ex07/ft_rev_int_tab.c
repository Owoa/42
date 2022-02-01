/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:24:41 by dfricard          #+#    #+#             */
/*   Updated: 2022/01/17 22:13:57 by dfricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	size_count;
	int	i;
	
	i = 0;
	size_count = size;
	while (i < size)
	{
		if(i < size_count)
		{
		tmp = tab[i];
		tab[i] = tab[size_count-1];
		tab[size_count - 1] = tmp;
		size_count--;
		}
		i++;
	}
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = nb * -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
}

int main()
{
	int	tab[10] = {1,2,3,4,5,6,7,8,9,9};
	ft_putnbr(tab[0]);
	ft_putnbr(tab[1]);
	ft_putnbr(tab[2]);
	ft_putnbr(tab[3]);
	ft_putnbr(tab[4]);
	ft_putnbr(tab[5]);
	ft_putnbr(tab[6]);
	ft_putnbr(tab[7]);
	ft_putnbr(tab[8]);
	ft_putnbr(tab[9]);
	ft_putchar('\n');
	ft_rev_int_tab(tab,10);
	ft_putnbr(tab[0]);
        ft_putnbr(tab[1]);
        ft_putnbr(tab[2]);
        ft_putnbr(tab[3]);
        ft_putnbr(tab[4]);
        ft_putnbr(tab[5]);
        ft_putnbr(tab[6]);
        ft_putnbr(tab[7]);
        ft_putnbr(tab[8]);
        ft_putnbr(tab[9]);

}
