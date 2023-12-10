/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadjemia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:03:40 by nadjemia          #+#    #+#             */
/*   Updated: 2023/11/25 12:21:02 by nadjemia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H

# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# ifdef BUFFER_SIZE
#  define SIZE BUFFER_SIZE
# else
#  define SIZE 5
# endif

char		*get_next_line(int fd);
void		ft_bzero(char *buf, size_t size);
int			ft_isnl(char *buf, int len, int *i);
void		ft_fill(char *buf, char *buffer, size_t size);
char		*ft_str(char *buffer);
size_t		ft_len(char *buffer);
void		ft_clean(char *buffer);
char		*ft_strdup(char *str);
int			ft_verif(int r, char *buf, char *buffer);
size_t		ft_strlen(char *str);

#endif
