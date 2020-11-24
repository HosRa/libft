/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 13:49:09 by thallard          #+#    #+#             */
/*   Updated: 2020/11/24 15:17:44 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

unsigned int	ft_strlen(const char *str);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char			*ft_strchr(const char *string, int c);
char			*ft_strrchr(const char *string, int c);
char			*ft_strnstr(char *str, char *to_find, int len);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strtrim(char const *str, char const *set);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strdup(char *src);

int				ft_isalpha(int character);
int				ft_isdigit(int character);
int				ft_isalnum(int character);
int				ft_isascii(int character);
int				ft_isprint(int character);
int				ft_tolower(int character);
int				ft_toupper(int character);

void			ft_putchar_fd(const char c, int fd);
void			ft_putendl_fd(const char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(const char *s, int fd);
void			*ft_calloc(int len, int character);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_itoa(int nbr);
char			**ft_split(char *str, char c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
void			ft_bzero(void *pointer, int size);
void			*ft_memset(void *pointer, int value, int size);
void			*ft_memcpy(void *dest, void *src, size_t len);
void			*ft_memccpy(void *dest, void *src, int character, size_t len);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *dest, int character, size_t len);
int				ft_memcmp(const void *dest, const void *source, size_t len);
int				ft_atoi(const char *nptr);

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **alst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *l, void *(*f)(void *), void (*d)(void *));

#endif
