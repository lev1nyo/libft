/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 19:13:07 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/11/29 19:42:51 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*new_next;
	t_list	*new_curr;

	new_curr = *alst;
	new_next = new_curr->next;
	del(new_curr->content, new_curr->content_size);
	new_curr = new_next;
	while (new_curr)
	{
		new_next = new_curr->next;
		del(new_curr->content, new_curr->content_size);
		free(new_curr);
		new_curr = new_next;
	}
	free(*alst);
	*alst = 0;
}
