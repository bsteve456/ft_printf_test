/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blacking <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:11:50 by blacking          #+#    #+#             */
/*   Updated: 2019/11/09 18:39:56 by blacking         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
//	int res = 0;
//	res = printf("dsdsddssddsdssd\n");
	printf("%d\n", 5);
	printf("%2d\n", 5);
	printf("%2d, %3i\n", 5, 7);
	printf("%2d, %3i, %5u\n", 5, 7, 2234565);
//	printf("%25p\n", &res);
	printf("%3x, %3X\n", 42, 42);
	printf("%3x, %3X\n", -42, -42);
	printf("dsdsds %5s, %5s\n", "zez", "ddsdsddddffd");
	printf("%10c\n", 'a');
	printf("%%\n");
	printf("%-5d\n", 5);
	printf("%-10d\n", 123);
	printf("%010d\n", 123);
	printf("%010d\n", -123);
	printf("%6p", NULL);
}
