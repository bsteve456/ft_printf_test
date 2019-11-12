/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blacking <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:11:50 by blacking          #+#    #+#             */
/*   Updated: 2019/11/12 18:18:17 by stbaleba         ###   ########.fr       */
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
	printf("%.4d\n",234);
	printf("%.4d\n",-234);
	printf("%.4s\n", "abcdefghi");
	printf("%5.4d\n",234);
	printf("%*d\n", 5, 6);
	printf("%.*d\n", 5, 6);
	printf("%p\n", NULL);
	printf("%*d\n", -10, 5);
	printf("%.*d\n", -10, 5);
	printf("%.d\n", 5);
	printf("%%%d\n", 5);
	printf("%s\n", NULL);
	printf("%.2s\n", NULL);
	printf("%10%\n");
	printf("%08.6d", 5);
}
