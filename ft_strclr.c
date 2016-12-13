/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levitanandrej <levitanandrej@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 10:43:28 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/29 21:43:54 by levitanandrej    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	unsigned int i;

	if (!(s))
		return ;
	i = 0;
	while (s[i])
	{
		s[i] = 0;
		i++;
	}
}