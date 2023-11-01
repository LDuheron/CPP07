/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:53:50 by lduheron          #+#    #+#             */
/*   Updated: 2023/11/01 17:09:10 by lduheron         ###   ########.fr       */
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

int	main(void)
{
	emptyArrayTest();
	fullArrayTest();
	
	return (SUCCESS);
}
