/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blacking <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:11:50 by blacking          #+#    #+#             */
/*   Updated: 2019/11/02 14:35:51 by blacking         ###   ########.fr       */
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

}
