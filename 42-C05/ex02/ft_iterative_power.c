/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorgsena <ygorgsena@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:32:50 by ygorgsena         #+#    #+#             */
/*   Updated: 2022/11/29 18:31:40 by ygorgsena        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	while (--power)
	{
		result *= nb;
	}
	return (result);
}

/* 
int main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 0;
	printf("Result is: %d\n", \
		ft_iterative_power(nb, power));
	return (0);
} 
*/
