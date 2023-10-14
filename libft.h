/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:51:55 by tpaesch           #+#    #+#             */
/*   Updated: 2023/10/14 17:21:09 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int num);
int		ft_isalnum(int num);
int		ft_isdigit(int num);
int		ft_isprint(int num);
int		ft_tolower(int num);
int		ft_toupper(int num);
size_t	ft_strlen(const char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int num);
int		ft_isascii(int num);
char	*ft_strdup(const char *str1);
char	*ft_strchr(const char *s, int c);
void	ft_bzero(void *s, int num);
int		ft_atoi(const char *str);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_putstr_fd(char *s, int fd);

#endif