/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorgsena <ygorgsena@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 22:18:10 by ygorgsena         #+#    #+#             */
/*   Updated: 2022/12/12 16:00:36 by ygorgsena        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		size;

	size = 0;
	if (!begin_list)
		return (size);
	while (begin_list)
	{
		begin_list = begin_list->next;
		size++;
	}
	return (size);
}
