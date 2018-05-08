/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 11:33:29 by sshiling          #+#    #+#             */
/*   Updated: 2017/11/01 11:46:20 by sshiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (c >= 97 && c <= 122)
	{
		ch = ch - 32;
		c = (int)ch;
	}
	return (c);
}