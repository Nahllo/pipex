/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:04:58 by jchauvet          #+#    #+#             */
/*   Updated: 2022/04/14 13:34:40 by jchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	backup;

	i = 0;
	j = 0;
	backup = dstsize;
	if (!src || !dst)
		return (0);
	if (!dstsize)
		return (ft_strlen(src));
	dst[i] = src[i];
	while (dstsize > 1 && dst[i] != 0)
	{
		dst[i] = src[i];
		--dstsize;
		++i;
		dst[i] = src[i];
	}
	if (backup != 0)
		dst[i] = '\0';
	while (src[j])
		++j;
	return (j);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
