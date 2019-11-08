/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blacking <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:11:50 by blacking          #+#    #+#             */
/*   Updated: 2019/11/08 14:54:32 by blacking         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int main()
{
//	int res = 0;
//	res = ft_printf("dsdsddssddsdssd\n");
	ft_printf("%d\n", 5);
	ft_printf("%2d\n", 5);
	ft_printf("%2d, %3i\n", 5, 7);
	ft_printf("%2d, %3i, %5u\n", 5, 7, 2234565);
//	ft_printf("%25p\n", &res);
	ft_printf("%3x, %3X\n", 42, 42);
	ft_printf("%3x, %3X\n", -42, -42);
	ft_printf("dsdsds %5s, %5s\n", "zez", "ddsdsddddffd");
	ft_printf("%10c\n", 'a');
	ft_printf("%%");
}
