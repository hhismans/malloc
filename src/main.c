/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhismans <hhismans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/20 19:42:09 by hhismans          #+#    #+#             */
/*   Updated: 2015/08/20 23:48:36 by hhismans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "malloc.h"
#include <sys/mman.h>
#include <unistd.h>

//av[1] = char
//av[2] = nmbr

int main(int argc, const char *argv[])
{

	char *str;

	str = malloc(sizeof(char) * 32);

	int i;
	i = 0;

	ft_putstr("size of *"); ft_putnbr(sizeof(str));
	while (i < 32)
	{
		str[i] = 0xFF;
		i++;
	}

	ft_putmem(str, 32);
/*	int n
	int c;
	char *str;
	int i;

	nb = ft_atoi(argv[2]);
	c = argv[1][0];
	str = (char *)mmap(0, nb + 1, PROT_READ | PROT_WRITE,
			MAP_ANON | MAP_PRIVATE, -1, 0);
	i = 0;
	while (i < nb)
	{
		str[i] = c;
		ft_putnbr(i);
		ft_putendl("");
		i++;
	}
	str[i] = 0;
	ft_putstr(str);

	ft_puthex(0x123456);
	ft_putendl("");
	ft_putnbr(83643);
*/

	return 0;
}
