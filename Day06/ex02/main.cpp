/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 21:08:45 by ehakam            #+#    #+#             */
/*   Updated: 2022/03/11 22:54:03 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.hpp"
#include <iostream>

int main( void ) {
	Base *p = generate();
	Base& r = *(generate());

	identify(p);
	identify(r);

	delete p;
	delete &r;

	return (0);
}