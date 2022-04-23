/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_tab_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 04:17:14 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/15 13:54:32 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	current_minimum;
	int	current_item;
	int	swap;

	current_minimum = 0;
	while (current_minimum < size)
	{
		current_item = current_minimum + 1;
		while (current_item < size)
		{
			if (tab[current_minimum] > tab[current_item])
			{
				swap = tab[current_minimum];
				tab [current_minimum] = tab[current_item];
				tab[current_item] = swap;
			}
			current_item++;
		}
		current_minimum++;
	}
}
