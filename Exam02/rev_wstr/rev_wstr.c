/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:46:35 by anlima            #+#    #+#             */
/*   Updated: 2023/02/26 19:17:38 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str && str[i])
		i++;
	return (i);
}

void    ft_printstr(char *str, int start, int end)
{
    while (1)
    {
        write(1, &str[start++], 1);
        if (start > end)
            break ;
    }
}

void	ft_revprint(char *str)
{
	int	i = ft_strlen(str) - 1;
	int	j = i;

	while (str && str[j] && j > 0)
	{
		if (str[j - 1] == ' ' || str[j - 1] == '\t' || j - 1 == 0)
		{	
			if (j - 1 == 0)
				j--;
			ft_printstr(str, j, i);
			if (j != 0)
			{
				write(1, &str[j - 1], 1);
				i = j - 2;
			}
		}
		j--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_revprint(argv[1]);
	write(1, "\n", 1);
}