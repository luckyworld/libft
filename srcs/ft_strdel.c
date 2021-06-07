/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <guvillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:43:53 by guvillat          #+#    #+#             */
/*   Updated: 2020/03/08 13:57:54 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared_libft.h"
#include <stdlib.h>

void	ft_strdel(char **as)
{
	if (!as || !*as)
		return ;
	free(*as);
	*as = NULL;
}