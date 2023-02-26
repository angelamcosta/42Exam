/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:09:41 by anlima            #+#    #+#             */
/*   Updated: 2023/02/26 20:22:04 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putnbr(int nb)
{
	char	temp;
	
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	temp = (nb % 10) + '0';
	write(1, &temp, 1);
}

int	main(void)
{
	int		i = 0;
	char	temp;
	while (++i < 101)
	{
		if (i % 3 != 0 && i % 5 != 0)
			ft_putnbr(i);
		else
		{	
			if (i % 3 == 0)
				write(1, "fizz", 4);
			if (i % 5 == 0)
				write(1, "buzz", 4);
		}
		write(1, "\n", 1);
	}
}