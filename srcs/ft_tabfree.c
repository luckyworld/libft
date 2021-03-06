/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <guvillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 18:26:20 by guvillat          #+#    #+#             */
/*   Updated: 2020/03/08 14:00:40 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_tabfree(char **array)
{
	size_t	i;

	i = 0;
	if (array)
	{
		while (array[i])
			ft_strdel(&array[i++]);
		free(array);
		array = NULL;
	}
}
