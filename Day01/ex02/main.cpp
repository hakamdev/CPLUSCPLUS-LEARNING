/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:00:13 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/29 01:01:04 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main( void ) {
	std::string	_string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &_string;
	std::string&	stringREF = _string;
	
	std::cout	<< "Address: variable: " << &_string << std::endl
			<< "Address: pointer:  " << stringPTR << std::endl
			<< "Address: referece: " << &stringREF << std::endl;
			
	std::cout	<< std::endl;

	std::cout	<< "Value: pointer:  " << *stringPTR << std::endl
			<< "Value: referece: " << stringREF << std::endl;

	return (0);
}