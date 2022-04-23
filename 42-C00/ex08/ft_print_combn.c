/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 03:00:46 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/16 04:39:38 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char print);
void	ft_exhibit_numbers(int u);

void	ft_print_combn(int n)
{
	int	unit;
	//int counter;
	int current_number;
	int counter_digit;
	int left_digit;
	//int algarism;

	current_number = 1;
	unit = 0;
	left_digit = 9;

	while (current_number <= n)
	{	
		counter_digit = 1;	
		//algarism = current_number - 1;
		while (unit <= left_digit)
		{
			
			while (counter_digit <= n)
			{
				if (counter_digit == n)
				{
					ft_exhibit_numbers(unit);
					ft_putchar(',');
					ft_putchar(' ');
					counter_digit++;
					unit++;
				}
				else 
				{
					ft_exhibit_numbers(unit);
					counter_digit++;
				}	
			}
			unit++;
		}
		//counter++;
		//counter_digit = 1;
		//unit = counter - 1;
		
	}
	current_number++;	
}


void	ft_putchar(char print)
{
	write(1, &print, 1);
}

void	ft_exhibit_numbers(int u)
{
	if (u <= 9)
	{
		ft_putchar(u + '0');
	}
	else 
	{
		ft_putchar('0');
	}
}

