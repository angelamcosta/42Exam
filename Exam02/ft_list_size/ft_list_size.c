/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:35:44 by anlima            #+#    #+#             */
/*   Updated: 2023/02/26 20:40:49 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list);

int	ft_list_size(t_list *begin_list)
{
	int	i = 1;

	if (!begin_list)
		return (0);
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}