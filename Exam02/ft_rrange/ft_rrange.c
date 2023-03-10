/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:34:49 by anlima            #+#    #+#             */
/*   Updated: 2023/02/26 18:44:30 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_range(int start, int end)
{
	if (start > end)
		return (start - end);
	return (end - start);
}

int     *ft_rrange(int start, int end)
{
	int	i = 0;
	int	*arr = (int *)malloc(sizeof(int) * (ft_range(start, end) + 1));
	if (!arr)
		return (0);
	if (start == end)
		arr[0] = start;
	else if (start > end)
	{
		while (start >= end)
			arr[i++] = end++;
	}
	else if (start < end)
	{
		while (start <= end)
			arr[i++] = end--;
	}
	return (arr);
}