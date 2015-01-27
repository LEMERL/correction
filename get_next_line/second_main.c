/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoudert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/08 11:21:03 by scoudert          #+#    #+#             */
/*   Updated: 2015/01/27 13:45:32 by mgrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "get_next_line.h"

int		main()
{
	char	*s;
	int i;

	i = 42;
	while (i != 0)
	{
		s = NULL;
		i = get_next_line(0, &s);
		if (i > 0)
		{
			printf("%s\n", s);
			free(s);
		}
	}
	return (i);
}
