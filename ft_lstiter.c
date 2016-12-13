/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 19:45:40 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/11/29 19:50:35 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*new;
	t_list	*neu;

	new = lst;
	while (new)
	{
		neu = new->next;
		(*f)(new);
		new = neu;
	}
}
