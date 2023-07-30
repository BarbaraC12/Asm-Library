/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcano <bcano@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:06:49 by bcano             #+#    #+#             */
/*   Updated: 2023/07/30 19:03:41 by bcano            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <string.h>
#include "lib.h"

int  main() {
//   char *str0 = "Je jure solonellement que mes intentions sont mauvaises";
	char *str1 = "Pourquoi cela signifierait-il que ce n'est pas réel?";
//   char *str2 = "42";
//   char *str3 = "\0";
//   char *str4 = "";
//   char *str5 = "Mefait accomplies!";
	char str6[50] = {0};
  
  	// printf("\033[0;33m# --------- FT_STRLEN vs STRLEN --------- #\033[0m\n");
	// printf("0: |\033[1;37m%s\033[0m| \n", str0);
	// printf("ft_strlen : %zd\n", ft_strlen(str0));
	// printf("strlen    : %zd\n", strlen(str0));
	// printf("1: |\033[1;37m%s\033[0m| \n", str1);
	// printf("ft_strlen : %zd\n", ft_strlen(str1));
	// printf("strlen    : %zd\n", strlen(str1));
	// printf("2: |\033[1;37m%s\033[0m| \n", str2);
	// printf("ft_strlen : %zd\n", ft_strlen(str2));
	// printf("strlen    : %zd\n", strlen(str2));
	// printf("3: |\033[1;37m%s\033[0m| \n", str3);
	// printf("ft_strlen : %zd\n", ft_strlen(str3));
	// printf("strlen    : %zd\n", strlen(str3));
	// printf("4: |\033[1;37m%s\033[0m| \n", str4);
	// printf("ft_strlen : %zd\n", ft_strlen(str4));
	// printf("strlen    : %zd\n", strlen(str4));
	// printf("5: |\033[1;37m%s\033[0m| \n", str5);
	// printf("ft_strlen : %zd\n", ft_strlen(str5));
	// printf("strlen    : %zd\n", strlen(str5));
	
	printf("\033[0;33m# --------- FT_STRCPY vs STRCPY --------- #\033[0m\n");
	printf("1: |\033[1;37m%s\033[0m| \n", str1);
	printf("ft_strcpy : |\033[1;37m%s\033[0m|\n", ft_strcpy(str6, str1));
	printf("strcpy    : |\033[1;37m%s\033[0m|\n", strcpy(str6, str1));
	printf("1: |\033[1;37m''\033[0m| \n");
	printf("ft_strcpy : |\033[1;37m%s\033[0m|\n", ft_strcpy(str6, ""));
	printf("strcpy    : |\033[1;37m%s\033[0m|\n", strcpy(str6, ""));
	
	// printf("\033[0;33m# --------- FT_STRDUP vs STRDUP --------- #\033[0m\n");
	// printf("1: |\033[1;37m%s\033[0m| \n", str1);
	// printf("ft_strdup : |\033[1;37m%s\033[0m|\n", ft_strdup(str1));
	// printf("strdup    : |\033[1;37m%s\033[0m|\n", strdup(str1));
	
	// printf("\033[0;33m# --------- FT_STRCMP vs STRCMP --------- #\033[0m\n");
	// printf("1: |\033[1;37m%s vs hello\033[0m| \n", str2);
	// printf("ft_strcmp : |\033[1;37m%d|\n", ft_strcmp(str2, "hello"));
	// printf("strcmp    : |\033[1;37m%d|\n", strcmp(str2, "hello"));
	// printf("2: |\033[1;37m%s vs Mefait accomplies!\033[0m| \n", str5);
	// printf("ft_strcmp : |\033[1;37m%d|\n", ft_strcmp(str5, "Mefait accomplies!"));
	// printf("strcmp    : |\033[1;37m%d|\n", strcmp(str5, "Mefait accomplies!"));
	// printf("3: |\033[1;37mhell vs hello\033[0m| \n");
	// printf("ft_strcmp : |\033[1;37m%d|\n", ft_strcmp("hell", "hello"));
	// printf("strcmp    : |\033[1;37m%d|\n", strcmp("hell", "hello"));
	// printf("4: |\033[1;37mhell vs '\\0' \033[0m| \n");
	// printf("ft_strcmp : |\033[1;37m%d|\n", ft_strcmp("hell", "\0"));
	// printf("strcmp    : |\033[1;37m%d|\n", strcmp("hell", "\0"));
	// printf("5: |\033[1;37m'' vs hello\033[0m| \n");
	// printf("ft_strcmp : |\033[1;37m%d|\n", ft_strcmp("", "hello"));
	// printf("strcmp    : |\033[1;37m%d|\n", strcmp("", "hello"));
	
	// printf("\033[0;33m# --------- FT_WRITE vs WRITE --------- #\033[0m\n");
	// printf("0: |\033[1;37m%s\033[0m| \n", str0);
	// printf("| ft_write  = %zd\n", ft_write(0, str0, strlen(str0)));
	// printf("| write     = %zd\n", write(0, str0, strlen(str0)));
	// printf("1: |\033[1;37m%s\033[0m| \n", str2);
	// printf("| ft_write  = %zd\n", ft_write(0, str2, strlen(str2)));
	// printf("| write     = %zd\n", write(0, str2, strlen(str2)));
	// printf("2: |\033[1;37m%s\033[0m| \n", str4);
	// printf("| ft_write  = %zd\n", ft_write(0, str4, strlen(str4)));
	// printf("| write     = %zd\n", write(0, str4, strlen(str4)));
	// printf("3: |\033[1;37m%s\033[0m| \n", str5);
	// printf("| ft_write  = %zd\n", ft_write(0, str5, strlen(str5)));
	// printf("| write     = %zd\n", write(0, str5, strlen(str5)));
	
	// printf("\033[0;33m# ---------  FT_READ vs READ  --------- #\033[0m\n");
	// char	buff[2048];
	// int		fd;
	// ssize_t	ret_ft;
	// ssize_t	ret_;

	// printf("1: |\033[1;37mClassic test\033[0m| \n");
	// fd = open("test1.txt", O_RDONLY);
	// printf("ft_read   :\n");
	// if (fd != -1) {
	// 	bzero(buff, sizeof(buff));
	// 	while ((ret_ft = ft_read(fd, buff, 10)) != 0) {
	// 		buff[ret_ft] = '\0';
	// 		printf("%s|", buff);
	// 	}
	// }
	// printf("\n");
	// close(fd);

	// fd = open("test1.txt", O_RDONLY);
	// printf("read      :\n");
	// if (fd != -1) {
	// 	bzero(buff, sizeof(buff));
	// 	while ((ret_ = read(fd, buff, 10)) != 0) {
	// 		buff[ret_] = '\0';
	// 		printf("%s|", buff);
	// 	}
	// }
	// printf("\n");
	// close(fd);	
	
	// printf("2: |\033[1;37mNon-existant file\033[0m| \n");
	// fd = open("test.txt", O_RDONLY);
	// printf("ft_read   :\n");
	// if (fd != -1) {
	// 	bzero(buff, sizeof(buff));
	// 	while ((ret_ft = ft_read(fd, buff, 10)) != 0) {
	// 		buff[ret_ft] = '\0';
	// 		printf("%s|", buff);
	// 	}
	// }
	// printf("\n");
	// close(fd);
	// fd = open("test.txt", O_RDONLY);
	// printf("read      :\n");
	// if (fd != -1) {
	// 	bzero(buff, sizeof(buff));
	// 	while ((ret_ = read(fd, buff, 10)) != 0) {
	// 		buff[ret_] = '\0';
	// 		printf("%s|", buff);
	// 	}
	// }
	// printf("\n");
	// close(fd);
	errno = 0;
}
