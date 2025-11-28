/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:30:33 by stcozaci          #+#    #+#             */
/*   Updated: 2025/11/28 17:21:13 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# ifndef BUFFER_SIZE 
#  define BUFFER_SIZE 10
# endif

//structure
typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

//bonus functions
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));

//ctype.h
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

//string.h
char	*ft_strchr(const char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *big, const char *small, size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

//strings.h
void	ft_bzero(void *s, size_t n);

//stdlib.h
int		ft_atoi(const char *ntpr);
void	*ft_calloc(size_t nmemb, size_t size);

//aditional functions
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(const char *s, int c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

//get_next_line
char	*get_next_line(int fd);

//ft_printf
int		ft_printf(char const *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putp(void *addr);
int		ft_putnbr(int n);
int		ft_putunsign(unsigned int nb);
int		ft_puthex(unsigned long long nb, char *strhex);

#endif
