/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorgsena <ygorgsena@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:33:28 by ygorgsena         #+#    #+#             */
/*   Updated: 2022/11/16 18:50:09 by ygorgsena        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_intlen(int *s);

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	while (--length >= 0)
		f(tab[length]);
}
