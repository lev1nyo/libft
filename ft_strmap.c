/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 11:22:43 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/28 11:44:28 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*temp;
	unsigned int	size;
	unsigned int	count;

	if (!(s))
		return (0);
	size = 0;
	while (s[size])
		size++;
	if (!(temp = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	count = 0;
	while (count < size)
	{
		temp[count] = (*f)(s[count]);
		count++;
	}
	temp[count] = 0;
	return (temp);
}
