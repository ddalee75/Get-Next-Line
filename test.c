/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:42:31 by chilee            #+#    #+#             */
/*   Updated: 2021/12/20 11:11:42 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int	main(void)
{
	int	fd;
	char	*buf;
	int	BUFFER_SIZE;

	BUFFER_SIZE = 200;
	buf = malloc((sizeof(char) * BUFFER_SIZE + 1));
	fd = open("text.txt", O_RDONLY);
	read (fd, buf, BUFFER_SIZE);
	buf[BUFFER_SIZE] = '\0';
	close(fd);

	printf("%s\n", buf);
	return (0);
}
