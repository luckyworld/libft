/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <guvillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:13:31 by guvillat          #+#    #+#             */
/*   Updated: 2020/03/05 01:16:49 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_wcharlen(wchar_t wchar)
{
	if (wchar <= 0x7f)
		return (1);
	else if (wchar <= 0x7ff)
		return (2);
	else if (wchar <= 0xffff)
		return (3);
	else
		return (4);
}

size_t	ft_wbytelen(wchar_t *ws)
{
	size_t	len;
	size_t	bytelen;

	len = ft_wstrlen(ws);
	bytelen = 0;
	while (len > 0)
	{
		bytelen += (size_t)ft_wcharlen(*ws);
		ws++;
		len--;
	}
	return (bytelen);
}
