/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 13:28:39 by labdello          #+#    #+#             */
/*   Updated: 2024/04/21 02:24:58 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

size_t	ft_strlen(char *str);
size_t	ft_strlcat(char *dest, char *src, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(char *str);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_itoa(int n);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strndup(char const *s, size_t n);
char	*ft_strstr(char *str, char *needle);
char	*ft_strnstr(char *str, char *needle, size_t n);
char	*ft_strchr(char *str, int c);
char	*ft_strdup(char *str);
char	*ft_strnew(size_t size);
char	*ft_strcat(char *dest, char *src);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *dest, char *src, size_t n);
char	*ft_strrchr(char *str, int c);
char	*ft_strtrim(char const *s);
void	ft_strclr(char *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putchar_fd(char c, int fd);
void	ft_strdel(char **as);
void	ft_memdel(void **ap);
void	ft_bzero(void *s, size_t n);
void	ft_putstr(char const *s);
void	ft_putnbr(int nbr);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar(char c);
void	ft_putstr_fd(char const *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_striter(char *s, void (*f)(char *));
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memalloc(size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int value, size_t n);

#endif
