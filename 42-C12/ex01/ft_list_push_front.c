/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorgsena <ygorgsena@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:37:07 by ygorgsena         #+#    #+#             */
/*   Updated: 2022/12/11 21:42:19 by ygorgsena        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_list;

	new_list = ft_create_elem(data);
	if (!*begin_list)
		*begin_list = new_list;
	else
	{
		new_list->next = *begin_list;
		*begin_list = new_list;
	}
}
