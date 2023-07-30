#ifndef LIB_H
# define LIB_H

#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t		ft_strlen(const char *str);
int			ft_strcmp(const char *s1, const char *s2);
// char		*ft_strcpy(char *dest, const char *src);
// char		*ft_strdup(const char *s);
ssize_t		ft_write(int, const void *, size_t);
ssize_t		ft_read(int fd, void *buf, size_t count);

#endif
