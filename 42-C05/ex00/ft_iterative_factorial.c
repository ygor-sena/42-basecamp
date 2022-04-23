/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 19:56:35 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/22 20:52:06 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;
	int	result;

	result = 1;
	count = 0;
	if (nb == 0)
		return (result);
	if (nb < 0)
		return (0);
	while (count < nb)
	{
		result = result * (nb - count);
		count++;
	}
	return (result);
}
