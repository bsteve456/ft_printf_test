/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blacking <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:11:50 by blacking          #+#    #+#             */
/*   Updated: 2019/11/14 14:46:52 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	printf("%10.4d\n", 5);
	printf("%*.*d\n", 10, 4, 5);
	printf("%10.4s\n", "abc");
	printf("%10.2s\n", "abc");
	printf("%10.*s\n", 5,"abc");
	printf("%10.*s\n", -5,"abc");
	printf("%10.*d\n", -5, 20);
	printf("%010.*d\n", -5, 10);
	printf("%-10.*s\n", -5,"abc");
	printf("%-010.*d\n", -5, 10);
	printf("%-010.*d\n", 5, 10);
	printf("%010.5d\n", 2500);
	printf("%10.2d\n", -2500);
	printf("%10.3d\n", -2500);
	printf("%10.4d\n", -2500);
	printf("%10.5d\n", -2500);
	printf("%-*d", -5, 6);
}
