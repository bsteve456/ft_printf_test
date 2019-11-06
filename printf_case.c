/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blacking <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:11:50 by blacking          #+#    #+#             */
/*   Updated: 2019/11/06 10:53:50 by blacking         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int res;
	res = printf("dsdsddssddsdssd\n");
	printf("%d\n", res);
	res = printf("a : %d\n", 1);
	printf("%d\n", res);
	res = printf("qsqssqsqs %d qqqsqssqqs qs%d\n", 12, 15);
	printf("%d\n", res);
	res = printf("qsqssqsqs %d qqqsqssqqs qs%i\n", 12, 1000);
	printf("%d\n", res);
	res = printf("%c\n", 'a');
	printf("%d\n", res);
	res = printf("%s\n", "asddsddssddsddsd");
	printf("%d\n", res);
//	res = printf("%p\n", &res);
	printf("%d\n", res);
	res = printf("asddsddssddsddsd %x\n", 45);
	res = printf("asddsddssddsddsd %x\n", -45);
	res = printf("asddsddssddsddsd %X\n", 45);
	res = printf("asddsddssddsddsd %X\n", -45);
	printf("%d\n", res);
	res = printf("qsqssqsqs %d qqqsqssqqs qs%i\n %u\n", 12, 1000,  2147483647);
	printf("%d\n", res);
	res = printf("asddsddssddsddsd %%\n");
	printf("%d\n", res);
	printf("%*d\n", 5, 5);
}
