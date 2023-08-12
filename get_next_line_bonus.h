/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbalci <tbalci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:33:36 by tbalci            #+#    #+#             */
/*   Updated: 2023/08/10 19:36:57 by tbalci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_alline(int fd, char *buffer);
char	*new_line(char *buffer);
char	*new_buffer(char *buffer);
char	*ft_strjoin(char *s1, char *s2);
int		checknewline(char *buffer);
size_t	ft_strlen(char *str);

#endif