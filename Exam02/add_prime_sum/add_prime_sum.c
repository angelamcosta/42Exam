/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:30:54 by anlima            #+#    #+#             */
/*   Updated: 2023/02/24 13:04:18 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int temp;
	
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	temp = nb % 10 + 48;
	write(1, &temp, 1);
}

int	ft_isnum(char c)
{
	return (c >= 48 && c<= 57);
}

int	ft_atoi(char *str)
{
	int i = 0;
    int nb= 0;
    int flag = 0;

	if (str[0] == '-')
		flag = 1;
	else if (str[0] == '+' || flag)
		i++;
	while (str && str[i])
	{
		if (!ft_isnum(str[i]))
			break;
		nb = nb * 10 + (str[i++] - 48);
	}
	if (flag)
		nb *= -1;
	return (nb);
}

int	ft_isprime(int nb)
{
	int	i = 2;

	if (nb == 0 || nb == 1)
		return (0);
	while (nb / 2 >= i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int temp;
	int nb = 0;

	if (argc == 2)
	{
		temp = ft_atoi(argv[1]);
		while (temp > 1)
		{
			if (ft_isprime(temp))
				nb += temp;
			temp--;
		}
		ft_putnbr(nb);
	}
	else
		ft_putnbr(nb);
	write(1, "\n", 1);
	return (0);
}