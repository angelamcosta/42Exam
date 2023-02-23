/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:31:38 by anlima            #+#    #+#             */
/*   Updated: 2023/02/23 17:39:54 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include <stdlib.h>

int		ft_len(int start, int end)
{
	if (start > end)
		return (start - end) + 1;
	else
		return (end - start) + 1;
}

int		*ft_rrange(int start, int end)
{
	int	*arr;
	int	i = 0;
	
	arr = malloc(sizeof(int) * ft_len(start, end));
	if (!arr)
		return (0);
	if (end == start)
		arr[0] = end;
	if (end > start)
    {
		while (end >= start)
			arr[i++] = end--;
	}
    else
	{
		while (end <= start)
			arr[i++] = end++;
	}
	return (arr);
}

// int	main(void)
// {
// 	int i = 0;
// 	int	*arr = ft_rrange(1, 3);

// 	while (arr && arr[i])
// 		printf("%i", arr[i++]);
// 	return (0);
// }