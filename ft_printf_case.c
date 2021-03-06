/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blacking <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:11:50 by blacking          #+#    #+#             */
/*   Updated: 2019/11/14 17:44:26 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"
int		ft_printf(const char *str, ...);

int main()
{
	ft_printf("%10.4d\n", 5);
	ft_printf("%*.*d\n", 10, 4, 5);
	ft_printf("%10.4s\n", "abc");
	ft_printf("%10.2s\n", "abc");
	ft_printf("%10.*s\n", 5,"abc");
	ft_printf("%10.*s\n", -5,"abc");
	ft_printf("%10.*d\n", -5, 20);
	ft_printf("%010.*d\n", -5, 10);
	ft_printf("%-10.*s\n", -5,"abc");
	ft_printf("%-010.*d\n", -5, 10);
	ft_printf("%-010.*d\n", 5, 10);
	ft_printf("%010.5d\n", 2500);
	ft_printf("%10.2d\n", -2500);
	ft_printf("%10.3d\n", -2500);
	ft_printf("%10.4d\n", -2500);
	ft_printf("%10.5d\n", -2500);
	ft_printf("%-*d\n", -5, 6);
	ft_printf("%2.0d\n", 0);
	ft_printf("%-12.5d\n", 456);
	ft_printf("%-12.5d\n", -456);
	ft_printf("%2.*d\n", -5, 0);
	ft_printf("%05.*d\n", -5, 0);
	ft_printf("%0*d\n", 5, 5);
	ft_printf("%0*d\n", -5, 5);
	ft_printf("%0*.*d\n", -5, 5, 0);
	ft_printf("%0*.2d\n", -5, 0);
	ft_printf("%0.d\n", 0);
	ft_printf("%1.d\n", 0);

}
