/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blacking <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:11:50 by blacking          #+#    #+#             */
/*   Updated: 2019/11/02 14:35:33 by blacking         ###   ########.fr       */
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
}
