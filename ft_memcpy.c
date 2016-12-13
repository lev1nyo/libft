/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 17:42:56 by levitanandrej     #+#    #+#             */
/*   Updated: 2016/11/29 20:30:38 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
		unsigned long	i;

		i = -1;
		while (++i < (unsigned long)n)
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		return (dst);
}
