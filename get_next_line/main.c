/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoudert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 11:21:03 by scoudert          #+#    #+#             */
/*   Updated: 2015/01/23 14:35:55 by mgrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include ""
#include "get_next_line.h"
#include <stdlib.h>

int		main()
{
	char	*s;
	int i;

	i = 42;
	int		file = open("ocean1.txt", O_RDONLY);
	while (i != 0)
	{
		s = NULL;
		i = get_next_line(file, &s);
		if (i > 0)
		{
			ft_putendl(s);
			free(s);
		}
	}
	close(file);
	return (i);
}
