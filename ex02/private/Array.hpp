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

template <typename T>
class Array
{
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array<T>() : _array(), _size(0) {}
		Array<T>(unsigned int n)
		{
			this->_size = n;
			this->_array = new T[n];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = 0;
		}

		Array<T>(Array<T> const & src){
			this->_size = src._size;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = src._array[i];
		}

		~Array<T>(){
			if (this->_size != 0)
				delete[] this->_array;
		}

		Array &	operator=(Array const & rhs){
			this->_size = rhs._size;
			if (this->array != NULL)
				delete[] this->_array;
			this-> array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
		}

		Array &	operator[](unsigned int i){
			if (i > this->_size)
				throw(IndexOutOfBoundsException());
			return (this->array[i]);
		}


		void	setArray(T value) {
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = value;
		}

		void	printArray(void) const {
			for (unsigned int i = 0; i < this->_size; i++)
				std::cout << this->_array[i] << "\n";
		}

		void	size(void) {return this->size;}


		class IndexOutOfBoundsException : public std::exception 
		{
			public:
				virtual const char* what() const throw();
		};
};

template <typename T>
const char* Array<T>::IndexOutOfBoundsException::what() const throw()
{
	return ("Index out of bounds.\n");
}
#endif


	