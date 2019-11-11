/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blacking <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:11:50 by blacking          #+#    #+#             */
/*   Updated: 2019/11/11 15:16:02 by blacking         ###   ########.fr       */
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
	ft_printf("%%\n");
	ft_printf("%-5d\n", 5);
	ft_printf("%-10d\n", 123);
	ft_printf("%010d\n", 123);
	ft_printf("%010d\n", -123);
	ft_printf("%.4d\n", 234);
	ft_printf("%.4d\n", -234);
	ft_printf("%.4s\n", "abcdefghi");
	ft_printf("%5.4d\n",234);

}
