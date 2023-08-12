/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:36:26 by tbalci            #+#    #+#             */
/*   Updated: 2023/08/11 01:56:02 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

char	*get_next_line(int fd);
char	*ft_alline(int fd, char *buffer);
char	*new_line(char *buffer);
char	*new_buffer(char *buffer);
char	*ft_strjoin(char *s1, char *s2);
int		checknewline(char *buffer);
size_t	ft_strlen(char *str);

#endif