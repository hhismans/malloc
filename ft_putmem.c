/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhismans <hhismans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/20 23:05:53 by hhismans          #+#    #+#             */
/*   Updated: 2015/08/20 23:50:32 by hhismans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_putmem(void *str, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		printf("prinf version : %p \n", (char *)str + i);
		ft_puthex((long int)((char *)str + i));
		ft_putstr(":");
		while (i < len && (i + 1) % 16 != 0) // print 16 byte info
		{
			ft_putstr(" ");
			ft_puthex(((unsigned char *)str)[i]);
			i++;
		}
		ft_putendl("");
		i++;
	}
}
