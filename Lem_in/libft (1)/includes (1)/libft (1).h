/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 19:53:19 by pmahele           #+#    #+#             */
/*   Updated: 2017/09/16 17:21:13 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>
# include <math.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>

# define C_NONE         "\033[0m"
# define C_BOLD         "\033[1m"
# define C_BLACK        "\033[30m"
# define C_RED          "\033[31m"
# define C_GREEN        "\033[32m"
# define C_BROWN        "\033[33m"
# define C_BLUE         "\033[34m"
# define C_MAGENTA      "\033[35m"
# define C_CYAN         "\033[36m"
# define C_GRAY         "\033[37m"

# define BUFF_SIZE 100
# define MALLCHECK(x) if (!x) return (-1);
# define IS_SPACE(x) (x == ' ' || x == '\t' || x == '\r' || x == '\f')

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *b, int c, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *str);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
int					ft_strcmp(const char *dst, const char *src);
int					ft_strncmp(const char *dst, const char *src, size_t n);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strdup(const char *s1);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, const char *little,
		size_t len);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				*ft_memalloc(size_t size);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);

# ifndef IS_SPACE
# define IS_SPACE(x) (x==' '||x=='\n'||x=='\t')
# endif

char				*ft_itoa_base(int n, int base);
void				ft_lstpushback(t_list **blst, void const *content,
		size_t content_size);
int					ft_countwordsall(char const *str);
void				ft_putnstr(char *str, int n);
char				*ft_strreplace(char *str, char *term, char *replace_by);
char				*ft_strjoinchcl(char *s1, char c);
int					ft_strstartswith(char *s1, char *s2);
char				*ft_strjoinch(char const *s1, char c);
char				*ft_strjoincl(char *s1, char *s2, int free_both);
void				ft_freestrarr(char **arr);
char				*ft_pathjoin(char *p1, char *p2);
int					ft_strendswith(char *s1, char *s2);
int					ft_isemptystr(char *str, int consider_space);
void				*ft_realloc(void *ptr, size_t prev_size, size_t new_size);
char				**ft_strsplitall(char const *s);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int                 get_next_line(const int fd, char **line);

#endif
