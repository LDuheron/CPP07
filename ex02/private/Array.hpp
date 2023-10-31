/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:12:15 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/27 15:37:58 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <limits.h>

#define SUCCESS 0
#define ERROR 1

#define DEBUG 0

template<typename T>
class Array
{
	private:
		T*	_type;
		int	_size;

	public:
		Array<T>();
		Array<T>(Array<T> const & src);
		~Array<T>();

		Array &	operator=(Array const & rhs);

		std::string const &	getSize(void) const;

		// int	size(void)
		// {return this->_size};
};

std::ostream & operator<<(std::ostream & lhs, Array const & rhs);

#endif
