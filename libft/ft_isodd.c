/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isodd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:21:08 by enena             #+#    #+#             */
/*   Updated: 2021/11/25 21:09:24 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_isodd(int c)
{
	if ((c == '1') || (c == '3') || (c == '5') || (c == '7') || (c == '9'))
		return (true);
	else
		return (false);
}