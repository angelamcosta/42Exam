/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:40:50 by anlima            #+#    #+#             */
/*   Updated: 2023/02/24 13:45:19 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strcmp(char *s1, char *s2);

int    ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	
	while ((s1 && s1[i]) && (s2 && s2[i]))
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("My strcmp comparing aa and ab: %i\n", ft_strcmp("aa", "ab"));
// 	printf("My strcmp comparing aa and ab: %i\n", strcmp("aa", "ab"));
// }