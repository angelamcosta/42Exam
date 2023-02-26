/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:25:53 by anlima            #+#    #+#             */
/*   Updated: 2023/02/26 18:32:28 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnum(char c)
{
	return (c >= 48 && c <= 57);
}

int	ft_atoi(const char *str)
{
	int	i = 0;
	int	nb = 0;
	int	flag = 0;

	if (str[0] == '-')
		flag = 1;
	if (str[0] == '+' || flag)
		i++;
	while (str && str[i])
	{
		if (!ft_isnum(str[i]))
			break ;
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	if (flag)
		nb *= -1;
	return (nb);
}