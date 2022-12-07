/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorgsena <ygorgsena@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:07:49 by ygorgsena         #+#    #+#             */
/*   Updated: 2022/12/07 18:32:40 by ygorgsena        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	result = 1;
	if (index == 0)
		return (0);
	else if (index < 0)
		return (-1);
	if (index > 2)
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}

/*
#include <stdio.h>

int main(void)
{
	int	nb;

	nb = 1;
	printf("Fibo is %d\n", ft_fibonacci(nb));
	return (0);
}
*/