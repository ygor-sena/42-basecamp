/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorgsena <ygorgsena@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:32:08 by ygorgsena         #+#    #+#             */
/*   Updated: 2022/11/09 17:37:20 by ygorgsena        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	if (cmpf(data_ref, root->item) < 0)
		btree_apply_infix(root->left, NULL);
	else if (cmpf(data_ref, root->item) > 0)
		btree_apply_infix(root->right, NULL);
	else
		return ;
}
