/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibenoit <nibenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:45:53 by nibenoit          #+#    #+#             */
/*   Updated: 2022/11/12 18:20:29 by nibenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_bzero(void *pointer, size_t count)
// {
// 	size_t	i;
// 	char	*ptr;

// 	i = 0;
// 	ptr = (char *)pointer;
// 	while (i < count)
// 	{
// 		ptr[i] = 0;
// 		i++;
// 	}
// }
void	ft_bzero(void *ptr, size_t size)
{
	char	*temp;

	temp = (char *) ptr;
	while (size--)
		temp[size] = 0;
}
