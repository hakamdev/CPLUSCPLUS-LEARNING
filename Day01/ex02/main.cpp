/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:00:13 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 18:21:16 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::string;
using std::cout;
using std::endl;

int		main( void ) {
	string	_string = "HI THIS IS BRAIN";
	string	*stringPTR = &_string;
	string&	stringREF = _string;
	
	cout	<< "Address: variable: " << &_string << endl
			<< "Address: pointer:  " << stringPTR << endl
			<< "Address: referece: " << &stringREF << endl;
			
	cout	<< endl;

	cout	<< "Value: pointer:  " << *stringPTR << endl
			<< "Value: referece: " << stringREF << endl;

	return (0);
}