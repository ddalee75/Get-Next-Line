/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_gnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:39:02 by chilee            #+#    #+#             */
/*   Updated: 2021/12/28 11:19:11 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int	fd;
//	int fd2;
	int i;

	i = 0;
	fd = open("text.txt", O_RDONLY);
//	fd2 = open("text2.txt", O_RDONLY);
	
	while (i < 4)
	{
		printf("%s", get_next_line(fd));
//		printf("%s", get_next_line(fd2));
		i++;
	}
	return (0);

