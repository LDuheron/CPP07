/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:51:47 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/31 18:49:07 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	{
		std::cout << "Int test\n";
		int	a[5];

		for (int i = 0; i < 5; i++)
		{
			a[i] = i;
		}
		iter(a, 5, printer<int>);
	}
	std::cout << "\n";
	{
		std::cout << "Float test\n";

		float	a[5];

		for (int i = 0; i < 5; i++)
		{
			a[i] = i;
		}
		iter(a, 5, printer<int>);
	}
	std::cout << "\n";
	{
		std::cout << "Char test\n";
		char	a[5];

		for (int i = 0; i < 5; i++)
		{
			a[i] = i;
		}
		iter(a, 5, printer<int>);
	}

	// {
	// 	float	a[5];
	// 	int	i = 0;

	// 	while (i < 5)
	// 	{
	// 		a[i] = 1.42;
	// 		std::cout << a[i] << " ";
	// 		i++;
	// 	}
	// 	std::cout << "\n";
	// 	iter<float, float(*)(float)>(a, 5, &increment);

	// 	i = 0;
	// 	while (i < 5)
	// 	{
	// 		std::cout << a[i] << " ";
	// 		i++;
	// 	}
	// 	std::cout << "\n";
	// }


	// {
	// 	char	a[5];
	// 	int	i = 0;

	// 	while (i < 5)
	// 	{
	// 		a[i] = "a";
	// 		std::cout << a[i] << " ";
	// 		i++;
	// 	}
	// 	std::cout << "\n";
	// 	iter(a, 5, &increment);

	// 	i = 0;
	// 	while (i < 5)
	// 	{
	// 		std::cout << a[i] << " ";
	// 		i++;
	// 	}
	// 	std::cout << "\n";
	// }

	return (0);
}
