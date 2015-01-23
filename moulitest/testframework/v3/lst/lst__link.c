/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst__link.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyang <yyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 17:50:11 by yyang             #+#    #+#             */
/*   Updated: 2015/01/09 16:03:53 by yyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

void	lst__link(t_lst_elem *elem1, t_lst_elem *elem2)
{
	if (elem1)
		elem1->next = elem2;
	if (elem2)
		elem2->prev = elem1;
}