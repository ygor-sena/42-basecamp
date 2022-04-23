/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:04:51 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/12 21:04:52 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char print);
void	ft_exhibit_numbers(int d, int u);

void	ft_print_comb2(void)
{
	int	first_number;
	int	second_number;

	first_number = 0;
	second_number = 0;
	while (first_number < 100)
	{
		second_number = first_number + 1;
		while (second_number < 100)
		{
			ft_exhibit_numbers(first_number / 10, first_number % 10);
			ft_putchar(' ');
			ft_exhibit_numbers(second_number / 10, second_number % 10);
			if ((first_number != 98) || (second_number != 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second_number++;
		}
		first_number++;
	}
}

void	ft_putchar(char print)
{
	write(1, &print, 1);
}

void	ft_exhibit_numbers(int d, int u)
{
	ft_putchar(d + '0');
	ft_putchar(u + '0');
}
