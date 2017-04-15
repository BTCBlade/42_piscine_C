/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 20:03:21 by tochen            #+#    #+#             */
/*   Updated: 2016/11/02 14:11:55 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	char *inputs[] = {
		"-214u	7483647", "2147483647",
		"-2147483648", "2147483648",
		"-2147483649", "2147483649",
		"-9999999999", "9999999999",
		"0", "123hello", "hello123",
		"abc123def", "123abc456", "ABCDEF",
		"01234", "+1", "+abc", "-abc",
		"+++3", "--1", "---1", "+-+1", "-+-1",
		"- 5", "+ 5", " - 5 ", " + 5 ",
		" 1 2 3", "5 6 7", "1+2-3",
		"         ",
		" \t\r\n\v\f123",
		"33333333333",
		"333333333333333333333333333333333333",
	};
	int i = 0;
	printf("TESTS:\n");
	while (inputs[i] != '\0')
	while (i < 34)
	{
	int a = atoi(inputs[i]);
	int b = ft_atoi(inputs[i]);
	char *test = a == b ? "\x1B[32mPASS" : "\x1B[31mFAIL";
	printf("%2d: %-12s - %12d - %12d - %-s\x1B[0m\n", i, inputs[i], a, b, test);
	i++;
	}
	return(0);
}