/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:02:33 by chilee            #+#    #+#             */
/*   Updated: 2021/12/30 12:36:55 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_find_n(char *str, int fd)
{
	char	*buf;
	int		v_ret;

	v_ret = 1;
	buf = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	while (v_ret != 0 && !ft_strchr(str, '\n'))
	{
		v_ret = read(fd, buf, BUFFER_SIZE);
		if (v_ret == -1)
		{	
			free(buf);
			return (NULL);
		}
		buf[v_ret] = '\0';
		str = ft_strjoin(str, buf);
	}
	free(buf);
	return (str);
}

char	*ft_get_bf_n(char *str)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		line = (char *)malloc(sizeof(char) * i + 2);
	else
		line = (char *)malloc(sizeof(char) * i + 1);
	if (!line)
		return (NULL);
	while (str[j] && str [j] != '\n')
	{
		line[j] = str[j];
		j++;
	}
	if (str[j] == '\n')
		line[j++] = '\n';
	line[j] = '\0';
	return (line);
}	

char	*ft_get_af_n(char *str)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str)
	{
		free(str);
		return (NULL);
	}
	line = (char *)malloc(sizeof(char) * (ft_strlen(str) - i) + 1);
	if (!line)
		return (NULL);
	i++;
	j = 0;
	while (j < ((int)ft_strlen(str) - i))
	{
		line[j] = str[i + j];
		j++;
	}
	line[j] = '\0';
	free(str);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*tmp[1024];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 1024)
		return (NULL);
	tmp[fd] = ft_find_n(tmp[fd], fd);
	if (!tmp[fd])
		return (NULL);
	if (!tmp[fd][0])
	{
		free(tmp[fd]);
		tmp[fd] = NULL;
		return (NULL);
	}
	line = ft_get_bf_n(tmp[fd]);
	tmp[fd] = ft_get_af_n(tmp[fd]);
	return (line);
}
