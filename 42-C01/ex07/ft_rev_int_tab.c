/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:41:42 by yde-goes          #+#    #+#             */
/*   Updated: 2022/04/15 04:33:18 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int swap;

	count = 0;
	while (count < size)
	{
		swap = tab[count];
		tab[count] = tab[size - 1];
		tab[size - 1] = swap;
		count++;
		size--;
	}
}

