/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeor-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 20:25:41 by rjeor-mo          #+#    #+#             */
/*   Updated: 2018/11/25 20:52:33 by rjeor-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	int		i;
	int		nb;

	i = 0;
	nb = n;
	str = (char *)s;
	while (i < nb)
	{
		str[i] = 0;
		i++;
	}
}
