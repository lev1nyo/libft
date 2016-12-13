/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 10:01:40 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/29 20:23:04 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n--)
	{
		*((unsigned char*)dst++) = *((unsigned char*)src++);
		if (*((unsigned char*)src) == (unsigned char)c)
		{
			*((unsigned char*)dst++) = *((unsigned char*)src);
			return (dst);
		}
	}
	return (NULL);
}

