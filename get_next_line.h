/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adchebbi <adchebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:20:12 by adchebbi          #+#    #+#             */
/*   Updated: 2025/12/30 12:16:35 by adchebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include "stdio.h"
# include "fcntl.h"
# include "stdlib.h"
# include "unistd.h"

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_verify(char *tmp, char *buff);
void	ft_extract(char **ptr);
char	*ft_strchr(const char *s, int c);
char	*get_next_line(int fd);
char	*ft_free(char **ptr_tmp, char **ptr_buff, ssize_t rb);

#endif