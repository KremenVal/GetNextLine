/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkremen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:14:11 by vkremen           #+#    #+#             */
/*   Updated: 2018/10/31 18:35:49 by vkremen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *p;

	p = *alst;
	while (p != NULL)
	{
		del(p->content, p->content_size);
		free(p);
		*alst = NULL;
		p = p->next;
	}
}
