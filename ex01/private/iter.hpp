/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:21 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/31 18:46:04 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>

template <typename T>
void printer(T  target) {
	std::cout << target << "\n";
}

template <typename T, typename F>
void iter(T* array, size_t length, F function) {
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}

#endif
