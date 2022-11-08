/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:37:58 by hugur             #+#    #+#             */
/*   Updated: 2022/11/08 14:40:56 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# include <unistd.h>

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);
int	ft_isalnum(int c);
int ft_isalpha(int c);
int	ft_isascii(int c);
size_t ft_isblank(size_t c);
int	ft_isdigit(int c);
size_t ft_isempty(char *str);
int	ft_isprint(int c);
char *ft_itoa(int n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dst, const void *src, int n);
void	*ft_memmove(void *dest, const void *src, size_t count);
void *ft_memset(void *b, int c, size_t len);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *s1);
void ft_striteri(char *s, void (*f)(unsigned int,char*));
char *ft_strjoin(char const *s1, char const *s2);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(const char *s, unsigned int start, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);
#endif
