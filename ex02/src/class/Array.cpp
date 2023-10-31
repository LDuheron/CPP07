/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:12:32 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/27 15:37:30 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

// Constructor -----------------------------------------------------------------

Array::Array()
{
	if (DEBUG)
		std::cout << "Default constructor called.\n";
}

Array::Array(Array const & src)
{
	if (DEBUG)
		std::cout << "Copy constructor called.\n";
}

// Destructor ------------------------------------------------------------------

Array::~Array()
{
	if (DEBUG)
		std::cout << "Destructor called.\n";
}

// Accessors -------------------------------------------------------------------

std::string const &	Array::getSize(void) const
{
	return (this->_size);
}

// Overload --------------------------------------------------------------------

Array &	Array::operator=(Array const & rhs)
{
	this->_grade = rhs._grade;
	return *this;
}

std::ostream & operator<<(std::ostream & lhs, Array const & rhs)
{
	lhs << "Size " << rhs.getSize() << ".\n";
	return lhs;
}

// Functions -------------------------------------------------------------------
