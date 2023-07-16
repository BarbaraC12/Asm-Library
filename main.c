#include <string.h>
#include "libasm.h"

void  main() {
  char *str1 = "prime test 1234";
  char *str2 = "2";
  char *str3 = "three";
  char *str4 = "";
  char *str5 = "\n";
  char *str6 = "Lorem ipsum dolor sit amet, consectetur adipiscingelit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquambibendum dolor mi, id fringilla tellus pulvinar eu.";
  
	printf("#--------- FT_STRLEN vs STRLEN ---------#\n");
	printf("1: |%s| ----------\n", str1);
	printf("ft_strlen : %zd\n", ft_strlen(str1));
	printf("strlen    : %zd\n", strlen(str1));
	printf("2: |%s| ----------\n", str2);
	printf("ft_strlen : %zd\n", ft_strlen(str2));
	printf("strlen    : %zd\n", strlen(str2));
	printf("3: |%s| ----------\n", str3);
	printf("ft_strlen : %zd\n", ft_strlen(str3));
	printf("strlen    : %zd\n", strlen(str3));
	printf("4: |%s| ----------\n", str4);
	printf("ft_strlen : %zd\n", ft_strlen(str4));
	printf("strlen    : %zd\n", strlen(str4));
	printf("4: |%s| ----------\n", str4);
	printf("ft_strlen : %zd\n", ft_strlen(str5));
	printf("strlen    : %zd\n", strlen(str5));
	printf("#--------- FT_STRCPY vs STRCPY ---------#\n");
	printf("1: |%s| ----------\n", str1);
	printf("ft_strcpy : |%s|\n", ft_strcpy(str1));
	printf("strcpy    : |%s|\n", strcpy(str1));
	
	// printf("#--------- FT_STRDUP vs STRDUP ---------#\n");
	// printf("1: |%s| ----------\n", str1);
	// printf("ft_strdup : |%s|\n", ft_strdup(str1));
	// printf("strdup    : |%s|\n", strdup(str1));
	
	// printf("#--------- FT_STRCMP vs STRCMP ---------#\n");
	// printf("1: |%s| ----------\n", str1);
	// printf("ft_strcmp : |%s|\n", ft_strcmp(str1, "hello"));
	// printf("strcmp    : |%s|\n", strcmp(str1, "hello"));
	
	// printf("#--------- FT_WRITE vs WRITE ---------#\n");
	// printf("1: |%s| ----------\n", str1);
	// printf("ft_write  = %zd\n", ft_write(0, str6, strlen(str6)));
	// printf("write     = %zd\n", write(0, str6, strlen(str6)));
	
	// printf("#---------  FT_READ vs READ  ---------#\n");
	
	// char	buff[2048];
	// int		fd;
	// ssize_t	ret_ft;
	// ssize_t	ret_;
	// fd = open("test1.txt", O_RDONLY);
	
	// printf("1: |%s| ----------\n", str1);
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
