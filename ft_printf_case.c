/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blacking <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:11:50 by blacking          #+#    #+#             */
/*   Updated: 2019/11/05 15:52:48 by blacking         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int main()
{
	int res;
	res = ft_printf("dsdsddssddsdssd\n");
	ft_printf("%d\n", res);
	res = ft_printf("a : %d\n", 1);
	ft_printf("%d\n", res);
	res = ft_printf("qsqssqsqs %d qqqsqssqqs qs%d\n", 12, 15);
	ft_printf("%d\n", res);
	res = ft_printf("qsqssqsqs %d qqqsqssqqs qs%i\n", 12, 1000);
	ft_printf("%d\n", res);
	res = ft_printf("%c\n", 'a');
	ft_printf("%d\n", res);
	res = ft_printf("%s\n", "asddsddssddsddsd");
	ft_printf("%d\n", res);
//	res = ft_printf("%p\n", &res);
	ft_printf("%d\n", res);
	res = ft_printf("asddsddssddsddsd %x\n", 45);
	res = ft_printf("asddsddssddsddsd %x\n", -45);
	res = ft_printf("asddsddssddsddsd %X\n", 45);
	res = ft_printf("asddsddssddsddsd %X\n", -45);
	ft_printf("%d\n", res);
	res = ft_printf("qsqssqsqs %d qqqsqssqqs qs%i\n %u\n", 12, 1000,  2147483647);
	ft_printf("%d\n", res);
	res = ft_printf("asddsddssddsddsd %%\n");
	ft_printf("%d\n", res);

}
