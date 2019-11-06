/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blacking <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:11:50 by blacking          #+#    #+#             */
/*   Updated: 2019/11/06 15:23:01 by blacking         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int main()
{
//	int res;
//	res = ft_printf("dsdsddssddsdssd\n");
	ft_printf("%d\n", 5);
	ft_printf("%2d\n", 5);
	ft_printf("%2d, %3i", 5, 7);
	ft_printf("%2d, %3i, %5u", 5, 7, 2234565);

}
