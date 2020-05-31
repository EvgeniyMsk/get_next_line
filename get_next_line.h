/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 23:54:19 by qsymond           #+#    #+#             */
/*   Updated: 2020/05/31 23:54:20 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

char		*ft_strchr(const char *str, int c);
char		*ft_strdup(const char *str);
char		*ft_strjoin(const char *str1, const char *str2);
int			get_next_line(int fd, char **line);
size_t		ft_strlen(const char *str);
void		*ft_memcpy(void *dest, const void *src, size_t num);

#endif
