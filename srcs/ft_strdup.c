/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvillat <guvillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:44:54 by guvillat          #+#    #+#             */
/*   Updated: 2020/03/05 01:23:34 by guvillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(s);
	if (!(dst = ft_memalloc(len + 1)))
		return (NULL);
	ft_strcpy(dst, s);
	return (dst);
}
