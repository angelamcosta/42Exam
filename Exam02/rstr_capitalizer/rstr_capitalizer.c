/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:46:48 by anlima            #+#    #+#             */
/*   Updated: 2023/02/24 14:29:17 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalfa(char c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str && str[i])
		i++;
	return(i);
}

void	ft_putstr(char *str)
{
	int	i = 0;
	int temp = 0;
	
	while (str && str[i])
	{
		if (ft_isalfa(str[i]) && (str[i] >= 97 && str[i] <= 122) && ((i + 1 == ft_strlen(str)) || str[i + 1] == ' ' || str[i + 1] == '\t'))
		{
			temp = str[i] - 32;
			write(1, &temp, 1);
		}
		else if (ft_isalfa(str[i]) && (str[i] >= 65 && str[i] <= 90) && (ft_isalfa(str[i + 1])))
		{
			temp = str[i] + 32;
			write(1, &temp, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int i = 1;
	
	if (argc > 1)
	{
		while (argv[i])
			ft_putstr(argv[i++]);
	}
	else
		write(1, "\n", 1);
	return(0);
}