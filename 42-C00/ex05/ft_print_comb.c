/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:55:24 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/14 16:30:54 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char print_h, char print_d, char print_u);
void	ft_exhibit_numbers(int h, int d, int u);

void	ft_print_comb(void)
{
	int	hundred;
	int	dozen;
	int	unit;

	hundred = 0;
	while (hundred <= 7)
	{	
		dozen = hundred + 1;
		while (dozen <= 8)
		{	
			unit = dozen + 1;
			while (unit <= 9)
			{
				ft_exhibit_numbers(hundred, dozen, unit);
				unit++;
			}
			dozen++;
		}
		hundred++;
	}
}

void	ft_putchar(char print_h, char print_d, char print_u)
{
	write(1, &print_h, 1);
	write(1, &print_d, 1);
	write(1, &print_u, 1);
}

void	ft_exhibit_numbers(int h, int d, int u)
{
	if (h != 7)
	{
		ft_putchar(h + '0', d + '0', u + '0');
		write (1, ", ", 2);
	}
	else
	{
		ft_putchar(h + '0', d + '0', u + '0');
	}
}
