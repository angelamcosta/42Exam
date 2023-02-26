/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:29:58 by anlima            #+#    #+#             */
/*   Updated: 2023/02/24 13:38:32 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalfa(char c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

void	ft_printc(char c)
{
	int n;
	
	if (c >= 97 && c <= 122)
		n = c - 97 + 1;
	else
		n = c - 65 + 1;
	while (n > 0)
	{
		write (1, &c, 1);
		n--;
	}
}

int	main(int argc, char **argv)
{
	int	i = 0;
	
	if (argc == 2)
	{
		while (argv[1] && argv[1][i])
		{
			if (ft_isalfa(argv[1][i]))
				ft_printc(argv[1][i]);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}