/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorgsena <ygorgsena@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:54:08 by ygorgsena         #+#    #+#             */
/*   Updated: 2022/11/16 19:19:42 by ygorgsena        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*mapped;

	mapped = malloc((length + 1) * sizeof(mapped));
	i = 0;
	while (i < length)
	{
		mapped[length] = f(tab[length]);
		i++;
	}
	mapped[length] = '\0';
	return (mapped);
}

/* int plus_two(int nbr)
{
	nbr += 2;
	return (nbr);
}

int	main(void)
{
	int tab[] = { 5, 6, 7, 10};
	int *new;
	
	new = ft_map(tab, 4, plus_two);
	for (int i = 0; i < 8; i++)
	{
		printf("new %d is %d\n", i, new[i]);
	}
	return (0);		
 }*/
