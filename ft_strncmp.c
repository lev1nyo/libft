/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 10:03:01 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/29 21:44:31 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				ans;
	unsigned int	i;

	i = -1;
	ans = 0;
	while (s1[++i] != '\0' && !(ans) && i < (unsigned int)n)
		ans = (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
	ans = (!ans && i != n) ? ((int)((unsigned char)s1[i] -
										(unsigned char)s2[i])) : ans;
	return (ans);
}
