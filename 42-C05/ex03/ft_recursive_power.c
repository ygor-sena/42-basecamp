/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorgsena <ygorgsena@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:37:46 by ygorgsena         #+#    #+#             */
/*   Updated: 2022/11/29 19:07:12 by ygorgsena        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	if (power > 1)
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}

/*
#include <stdio.h>

int main(void)
{
	int	nb;
	int	power;

	nb = 3;
	power = 1;
	printf("Result is: %d\n", \
		ft_recursive_power(nb, power));
	return (0);
} 
*/
