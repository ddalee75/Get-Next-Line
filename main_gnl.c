/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_gnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:39:02 by chilee            #+#    #+#             */
/*   Updated: 2021/12/23 17:53:44 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int	fd;
//	int fd2;

	fd = open("text2.txt", O_RDONLY);
//	fd2 = open("text2.txt", O_RDONLY);

	printf("%s", get_next_line(fd));
	printf("\n");
//	printf("%s", get_next_line(fd2));
//	printf("\n");
	printf("%s", get_next_line(fd));
	printf("\n");
//	printf("%s", get_next_line(fd2));
//	printf("\n");

	printf("%s", get_next_line(fd));
//	printf("\n");
	return (0);
}
