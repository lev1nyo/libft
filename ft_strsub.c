/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:03:23 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/29 21:37:23 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char	const *s, unsigned int start, size_t len)
{
	char			*temp;
	unsigned int	i;

	if (!(s))
		return (0);
	temp = (char *)malloc(sizeof(char) * (len + 1));
	if (temp == 0)
		return (temp);
	i = 0;
	while (i < (unsigned int)len)
	{
		temp[i] = s[start + i];
		i++;
	}
	temp[i] = 0;
	return (temp);
}
