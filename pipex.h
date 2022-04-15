/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:51:49 by jchauvet          #+#    #+#             */
/*   Updated: 2022/04/14 13:37:58 by jchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>

/* ********** */
/* PATHFINDER */
/* ********** */

void	exiterror(char *error);
char	*find_path(char *cmd, char **env);
void	check_num_args(int argc);

/* ******* */
/* UTILS_1 */
/* ******* */

void	ft_freestr(char **str);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strnstr(const char *hstck, const char *ndl, size_t len);

/* ******* */
/* UTILS_2 */
/* ******* */

int		ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);

/* ******** */
/* FT_SPLIT */
/* ******** */

char	**ft_split(char const *s, char c);

#endif
