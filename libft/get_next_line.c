/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   V1_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:19:05 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/01/25 15:19:05 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_read_line(int fd, char *st_buffer)
{
	char			*buffer;
	int				control;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	control = 1;
	while (!ft_strchr_gnl(st_buffer, '\n') && control != 0)
	{
		control = read(fd, buffer, BUFFER_SIZE);
		if (control == -1)
		{
			free(buffer);
			free(st_buffer);
			return (NULL);
		}
		buffer[control] = '\0';
		st_buffer = ft_strjoin_gnl(st_buffer, buffer);
	}
	free(buffer);
	return (st_buffer);
}

char	*ft_get_line(char *st_buffer)
{
	unsigned int		i;
	char				*str;

	i = 0;
	if (!st_buffer[i])
		return (NULL);
	while (st_buffer[i] && st_buffer[i] != '\n')
		i++;
	str = malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (st_buffer[i] && st_buffer[i] != '\n')
	{
		str[i] = st_buffer[i];
		i++;
	}
	if (st_buffer[i] == '\n')
	{
		str[i] = st_buffer[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_new_st_buffer(char *st_buffer)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (st_buffer[i] && st_buffer[i] != '\n')
		i++;
	if (!st_buffer[i])
	{
		free(st_buffer);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(st_buffer) - i));
	if (!str)
	{
		free(str);
		return (NULL);
	}
	i++;
	j = 0;
	while (st_buffer[i] != '\0')
		str[j++] = st_buffer[i++];
	str[j] = '\0';
	free(st_buffer);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*st_buffer = NULL;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	st_buffer = ft_read_line(fd, st_buffer);
	if (!st_buffer)
		return (NULL);
	line = ft_get_line(st_buffer);
	st_buffer = ft_new_st_buffer(st_buffer);
	return (line);
}

/*
int	main(void)
{
	// Declaramos variables
	int	fd;
	char *line;


	// El archivo se abre desde main
	// Le damos el valor a file descriptor cuando abra el archivo
	fd = open("archive.txt", O_RDONLY);

	// Control en caso de error
	if (fd < 0)
		return (-1);
	
	// Si correcto, actua gnl
	line = get_next_line(fd);
	printf("%s\n", line);


	// Cierre de el archivo
	close(fd);
}
*/