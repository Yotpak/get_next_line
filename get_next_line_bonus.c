/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:32:38 by tbalci            #+#    #+#             */
/*   Updated: 2023/08/11 01:56:48 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>

char	*ft_alline(int fd, char *buffer)
{
	char	*str;
	int		byte;

	byte = 1;
	str = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!str)
		return (NULL);
	while (!checknewline(buffer) && byte != 0)
	{
		byte = read(fd, str, BUFFER_SIZE);
		if (byte == -1)
		{
			free (buffer);
			free (str);
			return (NULL);
		}
		str[byte] = '\0';
		buffer = ft_strjoin(buffer, str);
	}
	free (str);
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer[1024];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > OPEN_MAX)
		return (0);
	buffer[fd] = ft_alline(fd, buffer[fd]);
	if (buffer[fd] == NULL)
		return (NULL);
	line = new_line(buffer[fd]);
	buffer[fd] = new_buffer(buffer[fd]);
	return (line);
}
