/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:52:45 by anlima            #+#    #+#             */
/*   Updated: 2023/02/24 12:02:43 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalfa(char c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

void ft_revcase(char *str)
{
	int	i = 0;
	int temp;

	while (str && str[i])
	{
		if (ft_isalfa(str[i]))
		{
			if (str[i] >= 97 && str[i] <= 122)
				temp = str[i] - 32;
			else
				temp = str[i] + 32;
			write(1, &temp, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_revcase(argv[1]);
	write(1, "\n", 1);
	return (0);
}