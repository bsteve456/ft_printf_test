/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blacking <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:11:50 by blacking          #+#    #+#             */
/*   Updated: 2019/11/14 00:32:43 by blacking         ###   ########.fr       */
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
	ft_printf("%010.4s\n", "abc");
	ft_printf("%010.2s\n", "abc");
	ft_printf("%10.*s\n", 5,"abc");
	ft_printf("%10.*s\n", -5,"abc");
	ft_printf("%10.*d\n", -5, 20);
	ft_printf("%010.*s\n", -5,"abc");
	ft_printf("%010.*d\n", -5, 10);
	ft_printf("%010s\n", "abc");
	ft_printf("%-10.*s\n", -5,"abc");
	ft_printf("%-010.*s\n", -5,"abc");
	ft_printf("%-010.*d\n", -5, 10);

}
