/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:25:01 by anlima            #+#    #+#             */
/*   Updated: 2023/02/26 20:34:30 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str && str[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	int	i = -1;
	char *dup;
	
	dup = (char *)malloc(ft_strlen(src) + 1);
	if (!dup)
		return (0);
	while (src && src[++i])
		dup[i] = src[i];
	dup[i] = 0;
	return(dup);
}