/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanlu <yanlu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:49:09 by yanlu             #+#    #+#             */
/*   Updated: 2025/12/04 19:49:47 by yanlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <bsd/string.h>

#include "libft.h"


static char	f_toupper(unsigned int i, char c)
{
	i++;
	if (c >= 'a' && c <= 'z')
		c = c - ('a' - 'A');
	return (c);
}

static void	f_tolower(unsigned int i, char *c)
{
	i++;
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + ('a' - 'A');
}


static void	del(void * content)
{
	content = NULL;
}

void	f_setcontent(void *content)
{
	printf("%s\n", (char *)content);
}

void	*f_map(void *content)
{
	return ((char *)content + 1);
}

int	main(void)
{
	printf("===== memset =====\n");
	char	s1[15];
	char	s2[15];
	char	*str1 = memset(s1, 49, 10);
	char	*str2 = ft_memset(s2, 49, 10);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("===============\n");

	printf("===== bzero =====\n");
	char	s3[15] = "nnnnnnnnnnnnnn";
	char	s4[15] = "nnnnnnnnnnnnnn";
	bzero(s3, 10);
	ft_bzero(s4, 10);
	printf("%s\n", s3);
	printf("%s\n", s4);
	printf("===============\n");

	printf("===== memcpy =====\n");
	int	src1[10] = {-1, -2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	dest1[20];
	int	dest2[20];
	int	n = 4;
	memcpy(dest1, src1, sizeof(int) * n);
	ft_memcpy(dest2, src1, sizeof(int) * n);
	int	i = 0;
	while (i < n)
	{
		printf("%i\n", dest1[i]);
		i++;
	}
	printf("----------\n");
	i = 0;
	while (i < n)
	{
		printf("%i\n", dest2[i]);
		i++;
	}
	printf("===============\n");

	printf("===== memmove =====\n");
	n = 4;
	int	src2[10] = {-1, -2, 3, 4, 5, 6, 7, 8, 9, 10};
	memmove(src1 + 2, src1, sizeof(int) * n);
	ft_memmove(src2 + 2, src2, sizeof(int) * n);
	i = 0;
	while (i < 10)
	{
		printf("%i\n", src1[i]);
		i++;
	}
	printf("----------\n");
	i = 0;
	while (i < 10)
	{
		printf("%i\n", src2[i]);
		i++;
	}
	printf("===============\n")

	printf("===== strlcpy =====\n");
	char	src3[10] = "a,;bc1234";
	char	dst3[10];
	char	dst4[10];
	int	n = 4;
	int	res1 = strlcpy(dst3, src3, n);
	int	res2 = ft_strlcpy(dst4, src3, n);
	printf("%s, %i\n", dst3, res1);
	printf("%s, %i\n", dst4, res2);
	printf("================\n");

	printf("===== strlcat =====\n");
	char	src4[] = "lorem ipsum dolor sit amet";
	char	*dst5 = malloc(15 * sizeof(char));
	memset(dst5, 'r', 15);
	//char	dst6[20] = ".\\[]";
	char	*dst6 = malloc(15 * sizeof(char));
	memset(dst6, 'r', 15);
	int	n = 15;
	int	res3 = strlcat(dst5, src4, n);
	int	res4 = ft_strlcat(dst6, src4, n);
	printf("%s, %i\n", dst5, res3);
	printf("%s, %i\n", dst6, res4);
	printf("===============\n");
	free(dst5);
	free(dst6);

	printf("===== strchr =====\n");
	char	s5[] = "./;a vb123./;";
	int	c = ' ';
	char	*res5 = strchr(s5, c);
	char	*res6 = ft_strchr(s5, c);
	printf("%s\n", res5);
	printf("%s\n", res6);
	printf("===============\n");

	printf("===== strrchr =====\n");
	char	s6[] = "abab";
	int	c = 'a';
	char	*res7 = strrchr(s6, c);
	char	*res8 = ft_strrchr(s6, c);
	printf("%s\n", res7);
	printf("%s\n", res8);
	printf("===============\n");

	printf("===== strncmp =====\n");
	char	sa[] = "test\200";
	char	sb[] = "test\0";
	int	n = 6;
	int	resa = strncmp(sa, sb, n);
	int	resb = ft_strncmp(sa, sb, n);
	printf("%i\n", resa);
	printf("%i\n", resb);
	printf("===============\n");

	printf("===== memchr =====\n");
	char	s7[5] = "ab12";
	int	c = 'b';
	int	n = 10;
	char	*res9 = memchr(s7, c, n);
	char	*res10 = ft_memchr(s7, c, n);
	printf("%s\n", res9);
	printf("%s\n", res10);
	printf("===============\n");

	printf("===== memcmp =====\n");
	int	s8[5] = {-1, 0, 2, 4, 10};
	int	s9[5] = {-1, 0, 2, 4, -10};
	int	n = 3;
	printf("%i\n", memcmp(s8, s9, sizeof(int) * n));
	printf("%i\n", ft_memcmp(s8, s9, sizeof(int) * n));
	printf("================\n");

	printf("===== strnstr =====\n");
	char	big[10] = "abcd1234";
	char	little[5] = "d1";
	int	len = 4;
	char	*res9 = strnstr(big, little, len);
	char	*res10 = ft_strnstr(big, little, len);
	printf("%s\n", res9);
	printf("%s\n", res10);
	printf("===============\n");

	printf("===== calloc =====\n");
	int	nmemb = 4;
	int	*arr = calloc(nmemb, sizeof(int));
	int	i = 0;
	//printf("%lu\n", SIZE_MAX);
	//printf("%zu\n", (size_t)-1);
	while (i < nmemb)
	{
		printf("%i\n", arr[i]);
		i++;
	}
	//free(arr);
	printf("===============\n");

	printf("===== strdup =====\n");
	char	s10[5] = "a,;1";
	char	*res11 = ft_strdup(s10);
	printf("%s\n", res11);
	printf("===============\n"); 

	printf("===== ft_substr =====\n");
	char	s11[10] = "a,;.123a]";
	unsigned int	start = 8;
	int	len = 2;
	char	*res12 = ft_substr(s11, start, len);
	printf("%s\n", res12);
	printf("============\n");

	printf("===== ft_strjoin =====\n");
	char	s12[5] = "1234";
	char	s13[5] = "abcd";
	char	*res13 = ft_strjoin(s12, s13);
	printf("%s\n", res13);
	printf("===============\n");

	printf("===== ft_strtrim =====\n");
	char	s13[] = "b";
	char	set[] = "a";
	//char	*s13 = NULL;
	//char	*set = NULL;
	char	*res14 = ft_strtrim(s13, set);
	printf("%s\n", res14);
	free(res14);
	printf("===============\n");

	printf("===== ft_split =====\n");
	char	s14[] = ",,,abcd, 12345,,,[];,";
	char	c = ',';
	char	**arr = ft_split(s14, c);
	int	i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	printf("===============\n");

	printf("====== ft_itoa =====\n");
	int	n = -2147483648;
	char	*res15 = ft_itoa(n);
	printf("%s\n", res15);
	printf("===============\n");

	printf("===== ft_strmapi =====\n");
	char	s15[] = "ab12,;.cdg";
	char	*res16 = ft_strmapi(s15, f_toupper);
	printf("%s\n", res16);
	printf("===============\n");

	printf("===== ft_striteri =====\n");
	ft_striteri(res16, f_tolower);
	printf("%s\n", res16);
	printf("===============\n");

	printf("===== ft_putnbr_fd =====\n");
	ft_putnbr_fd(n, 1);	
	printf("\n===============\n");


	printf("\n==================\n");
	printf("==================\n");
	printf("===== Bonus =====\n");
	printf("\n===== ft_lstnew =====\n");
	t_list	*lst = ft_lstnew("abc");
	printf("%s\n", (char *) lst->content);
	printf("===============\n");

	printf("===== ft_lstadd_front =====\n");
	t_list	*new = ft_lstnew("123");
	//t_list	*test = NULL;
	//ft_lstadd_front(&test, new);
	//printf("%p\n", &test);
	//printf("%s\n", (char *)test->content);
	//printf("%s\n", (char *)test->next);
	ft_lstadd_front(&lst, new);
	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)((lst->next)->content));
	printf("===============\n");

	printf("===== ft_lstsize ======\n");
	int	size = ft_lstsize(lst);
	printf("%i\n", size);
	printf("===============\n");

	printf("===== ft_lstlast =====\n");
	t_list	*last = ft_lstlast(lst);
	printf("%s\n", (char *)last->content);
	printf("================\n");

	printf("===== ft_lstadd_back =====\n");
	t_list	*new2 = ft_lstnew("x x12|");
	//t_list	*test = NULL;
	//ft_lstadd_back(&test, new2);
	//printf("%s\n", (char *)test->content);
	ft_lstadd_back(&lst, new2);
	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)((lst->next)->content));
	printf("%s\n", (char *)((lst->next)->next)->content);
	printf("===============\n");
/*
	printf("====== ft_lstdelone =====\n");
	t_list	*lst2 = lst->next;
	ft_lstdelone(lst, del);
	printf("%s\n", (char *)lst);
	printf("%s\n", (char *)lst2->content);
	printf("================\n");

	printf("===== ft_lstclear =====\n");
	t_list	*lst2 = lst->next;
	ft_lstclear(&lst2, del);
	printf("%s\n", (char *)lst2);
	printf("%s\n", (char *)lst->content);
	printf("===============\n");
*/
	printf("===== ft_lstiter =====\n");
	ft_lstiter(lst, &f_setcontent);
	printf("===============\n");

	printf("===== ft_lstmap =====\n");
	t_list	*lst2 = ft_lstmap(lst, &f_map, &del);
	printf("%s\n", (char *)lst2->content);
	printf("%s\n", (char *)(lst2->next)->content);
	printf("%s\n", (char *)((lst2->next)->next)->content);
	printf("===============\n");
}
