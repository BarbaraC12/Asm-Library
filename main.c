/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcano <bcano@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:06:49 by bcano             #+#    #+#             */
/*   Updated: 2023/07/22 17:22:13 by bcano            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <string.h>
#include "lib.h"

#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int  main() {
  char *str0 = "Je jure solonellement que mes intentions sont mauvaises";
  char *str1 = "Pourquoi cela signifierait-il que ce n'est pas réel?";
  char *str2 = "42";
  char *str3 = "\0";
  char *str4 = "";
  char *str5 = "Mefait accomplies!";
  
  	printf("\033[0;33m# --------- FT_STRLEN vs STRLEN --------- #\033[0m\n");
	printf("0: |\033[1;37m%s\033[0m| \n", str0);
	printf("ft_strlen : %zd\n", ft_strlen(str0));
	printf("strlen    : %zd\n", strlen(str0));
	printf("1: |\033[1;37m%s\033[0m| \n", str1);
	printf("ft_strlen : %zd\n", ft_strlen(str1));
	printf("strlen    : %zd\n", strlen(str1));
	printf("2: |\033[1;37m%s\033[0m| \n", str2);
	printf("ft_strlen : %zd\n", ft_strlen(str2));
	printf("strlen    : %zd\n", strlen(str2));
	printf("3: |\033[1;37m%s\033[0m| \n", str3);
	printf("ft_strlen : %zd\n", ft_strlen(str3));
	printf("strlen    : %zd\n", strlen(str3));
	printf("4: |\033[1;37m%s\033[0m| \n", str4);
	printf("ft_strlen : %zd\n", ft_strlen(str4));
	printf("strlen    : %zd\n", strlen(str4));
	printf("5: |\033[1;37m%s\033[0m| \n", str5);
	printf("ft_strlen : %zd\n", ft_strlen(str5));
	printf("strlen    : %zd\n", strlen(str5));
	// printf("\033[0;33m# --------- FT_STRCPY vs STRCPY --------- #\033[0m\n");
	// printf("1: |\033[1;37m%s\033[0m| \n", str1);
	// printf("ft_strcpy : |\033[1;37m%s|\n", ft_strcpy(str1));
	// printf("strcpy    : |\033[1;37m%s|\n", strcpy(str1));
	
	// printf("\033[0;33m# --------- FT_STRDUP vs STRDUP --------- #\033[0m\n");
	// printf("1: |\033[1;37m%s\033[0m| \n", str1);
	// printf("ft_strdup : |\033[1;37m%s|\n", ft_strdup(str1));
	// printf("strdup    : |\033[1;37m%s|\n", strdup(str1));
	
	// printf("\033[0;33m# --------- FT_STRCMP vs STRCMP --------- #\033[0m\n");
	// printf("1: |\033[1;37m%s\033[0m| \n", str1);
	// printf("ft_strcmp : |\033[1;37m%s|\n", ft_strcmp(str1, "hello"));
	// printf("strcmp    : |\033[1;37m%s|\n", strcmp(str1, "hello"));
	
	// printf("\033[0;33m# --------- FT_WRITE vs WRITE --------- #\033[0m\n");
	// printf("1: |\033[1;37m%s\033[0m| \n", str1);
	// printf("ft_write  = %zd\n", ft_write(0, str6, strlen(str6)));
	// printf("write     = %zd\n", write(0, str6, strlen(str6)));
	
	// printf("\033[0;33m# ---------  FT_READ vs READ  --------- #\033[0m\n");
	
	// char	buff[2048];
	// int		fd;
	// ssize_t	ret_ft;
	// ssize_t	ret_;
	// fd = open("test1.txt", O_RDONLY);
	
	// printf("1: |\033[1;37m%s\033[0m| \n", str1);
 //    ret_ft = ft_read(fd, buff, 10);
 //    buff[ret_ft] = '\0';
	// printf("ft_read   : \n buff = %s, ret = %zd\n", buff, ret_ft);
	// lseek(fd, 0, SEEK_SET);
	// ret_ = read(fd, buff, 10);
	// buff[ret_] = '\0';
	// printf("read      : \nbuff = %s, ret = %zd\n", buff, ret_);
	// close(fd);
	// errno = 0;
}
