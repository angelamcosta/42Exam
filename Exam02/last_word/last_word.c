/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:04:31 by anlima            #+#    #+#             */
/*   Updated: 2023/02/24 12:29:45 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isalfa(char c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

int		ft_strlen(char *str)
{
	int	i = 0;

	while (str && str[i])
		i++;
	return (i);
}

void	ft_lastword(char *str)
{
	int i = ft_strlen(str) - 1;

	while (str[i] == ' ' || str[i] == '\t')
		i--;
	while (str && str[i])
	{
		if (!(str[i] != ' ' && str[i] != '\t'))
			break;
		i--;
	}
	while (str && str[++i] && (str[i] != ' ' && str[i] != '\t'))
		write(1, &str[i], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_lastword(argv[1]);
	write(1, "\n", 1);
	return (0);
}