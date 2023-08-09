/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcano <bcano@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:02:21 by bcano             #+#    #+#             */
/*   Updated: 2023/08/09 14:02:22 by bcano            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef LIB_H
# define LIB_H

#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


size_t		ft_strlen(const char *str);
int			ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strdup(const char *s);
ssize_t		ft_write(int, const void *, size_t);
ssize_t		ft_read(int fd, void *buf, size_t count);

#endif
