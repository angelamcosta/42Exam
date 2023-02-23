/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:17:01 by anlima            #+#    #+#             */
/*   Updated: 2023/02/23 16:29:48 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_do_op(char *nb, char *op, char *nb2)
{
	int n1 = atoi(nb);
	int n2 = atoi(nb2);
	int n3 = 0;

	if (op[0] == '+')
		n3 = n1 + n2;
	else if (op[0] == '-')
		n3 = n1 - n2;
	else if (op[0] == '*')
		n3 = n1 * n2;
	else if (op[0] == '/')
		n3 = n1 / n2;
	printf("%i\n", n3);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		ft_do_op(argv[1], argv[2], argv[3]);
	else
		write(1, "\n", 1);
	return (0);
}