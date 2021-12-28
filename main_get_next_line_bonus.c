/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_get_next_line_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 13:00:28 by chilee            #+#    #+#             */
/*   Updated: 2021/12/28 11:31:55 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	main(void)
{
	int fd;
	int fd1;

	fd = open("text.txt", O_RDONLY);
	fd1 = open("text2.txt", O_RDONLY);

	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd1));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd1));

	return (0);


}
