/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:53:50 by lduheron          #+#    #+#             */
/*   Updated: 2023/11/01 17:23:17 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

void	emptyArrayTest(void)
{
	Array<int> empty;

	std::cout << "Empty array : ";
	empty.printArray();
	std::cout << "\n";
}

void	fullArrayTest(void)
{
	Array<int>	full(5);

	std::cout << "Full array : ";
	full.printArray();
	std::cout << "\n";
}

void	copyArrayTest(void)
{
	Array<int> first(2);
	Array<int> second(first);

	second.printArray();

	std::cout << "\n";
	first.setArray(8);
	second.printArray();
}

int	main(void)
{
	// emptyArrayTest();
	// fullArrayTest();
	copyArrayTest();

	return (SUCCESS);
}
