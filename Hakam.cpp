/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hakam.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:53:39 by ehakam            #+#    #+#             */
/*   Updated: 2021/07/17 17:59:11 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Hakam.hpp"

void		output(std::string msg) {
	std::cout << msg << std::endl;
}

Hakam::Hakam( void ) {
	output(std::string("Default Constructor Called!")
			+ std::string(" | ") + getName());
}
Hakam::Hakam( int age, std::string name, std::string id )
			: age(age), name(name), id(id) {
	output("Custom Constructor Called!" + std::string(" | ") + getName());
}
Hakam::~Hakam( void ) {
	output("Destructor Called!" + std::string(" | ") + getName());
}

void		Hakam::setAge( int age ) {
	this->age = age;
}
void		Hakam::setName( std::string name ) {
	this->name = name;
}
void		Hakam::setId( std::string id ) {
	this->id = id;
}

int			Hakam::getAge( void ) {
	return (this->age);
}
std::string	Hakam::getName( void ) {
	return (this->name);
}
std::string	Hakam::getId( void ) {
	return (this->id);
}
