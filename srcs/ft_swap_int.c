/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <guvillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:19:21 by guvillat          #+#    #+#             */
/*   Updated: 2020/03/05 01:15:06 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared_libft.h"

void	ft_swap_int(int32_t *nb1, int32_t *nb2)
{
	int32_t	tmp;

	tmp = *nb1;
	*nb1 = *nb2;
	*nb2 = tmp;
}