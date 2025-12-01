/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:42:33 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/01 13:30:00 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int	ft_isalnum(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);
int	ft_atoi(const char *str);

#endif
#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

int	ft_isalnum(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int	ft_atoi(const char *str);
size_t	ft_strlen(const char *s);

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amigdadi <amigdadi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:42:33 by amigdadi          #+#    #+#             */
/*   Updated: 2025/12/01 13:00:00 by amigdadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#endif
size_t ft_strlen(const char *s);


#endif
