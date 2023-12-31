/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:53:50 by lduheron          #+#    #+#             */
/*   Updated: 2023/11/01 18:06:30 by lduheron         ###   ########.fr       */
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

// void	copyArrayTest(void)
// {
// 	Array<int> first(2);
// 	Array<int> second(first);

// 	std::cout << "First Array : \n";
// 	second.printArray();
// 	std::cout << "Second Array :\n";
// 	second.printArray();

// 	std::cout << "\nSetting new value :\nFirst array :\n";
// 	first.setArray(8);
// 	first.printArray();
// 	std::cout << "Second array:\n";
// 	second.printArray();
// }

// void	exceptionTest(void)
// {
// 	try
// 	{
// 		// setting something test.
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "Error :" << e.what() << '\n';
// 	}
// }

int	main(void)
{
	// copyArrayTest();///////////////////

	// emptyArrayTest();
	// fullArrayTest();
	
	// exceptionTest();

	return (SUCCESS);
}
