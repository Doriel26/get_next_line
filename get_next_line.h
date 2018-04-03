/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 17:21:38 by dchiche           #+#    #+#             */
/*   Updated: 2017/12/07 17:47:52 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <unistd.h>
# include "./libft/libft.h"

# define BUFF_SIZE 1

typedef struct		s_gnl
{
	char			buf[BUFF_SIZE + 1];
	int				j;
	int				fd;
	struct s_gnl	*next;
}					t_gnl;

int					get_next_line(const int fd, char **line);
int					ft_gnl(char **line, t_gnl *gnl);
int					ft_read(char **line, char *str, t_gnl *gnl);

#endif
