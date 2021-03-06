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
#include <stdio.h>

int main(void)
{
    char    *str;
    int fd;

    fd = open("test.txt", O_RDONLY);
    str = get_next_line(fd);
    while (str)
    {
        printf("%s", str);
        free(str);
        str = get_next_line(fd);
    }
    free(str);
	close(fd);
}
	return (0);

