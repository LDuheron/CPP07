/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:21 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/26 17:33:34 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>

template <typename T>
void swap(T &a, T &b) {
	T	c;

	c = a;
	a = b;
	b = c;
}

template <typename T>
T min(T a, T b) {
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T max(T a, T b) {
	if (a > b)
		return (a);
	return (b);
}

#endif
