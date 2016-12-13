/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 10:02:35 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/29 20:41:19 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	unsigned long	i;
	char			*temp;

	i = 0;
	while (s1[i])
		i++;
	if (!(temp = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	i = -1;
	while (s1[++i])
		temp[i] = s1[i];
	temp[i] = 0;
	return (temp);
}
