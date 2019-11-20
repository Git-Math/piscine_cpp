// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   easyfind.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/26 01:59:37 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/26 03:13:53 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <list>
#include <vector>
#include <iostream>
#include <map>
#include <set>
#include <deque>
#include <algorithm>

template< typename T>
bool easyfind(T cont, int x)
{
	typename T::iterator it = find (cont.begin(), cont.end(), x);
	if (it != cont.end()) 
		std::cout << "Element found int the container : " << *it << std::endl;
	else
		return false;
	return true;
}
