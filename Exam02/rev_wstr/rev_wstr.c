/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:43:10 by anlima            #+#    #+#             */
/*   Updated: 2023/02/23 18:07:19 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str && str[i])
		i++;
	return (i);
}

int	ft_wc(char *str)
{
	int	i = 0;
	int w = 1;
	
	while (str && str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			w++;
		i++;
	}
	return (w);
}

void	ft_printwords(char *str)


int	main(int argc, char **argv)
{
	if (argc == 2)
	
	else
		write(1, "\n", 1);
	return (0);
}