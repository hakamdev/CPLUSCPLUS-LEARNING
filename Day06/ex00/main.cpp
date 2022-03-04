/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 02:35:36 by ehakam            #+#    #+#             */
/*   Updated: 2022/03/04 20:35:39 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>

bool isChar(std::string value) {
    size_t i = 0;
    if (value.length() == 1 && value[0] == ' ')
        return (true);
    while (i < value.length() && value[i] == ' ') ++i;
    if (value[i] >= '0' && value[i] <= '9')
        return (false);
    ++i;
    while (i < value.length() && value[i] == ' ') ++i;
    return (i == value.length());
}

bool isInt(std::string value) {
    size_t i = 0;
    size_t prev_i;
    while (i < value.length() && value[i] == ' ') ++i;
    if (value[i] == '-' || value[i] == '+') ++i;
    prev_i = i;
    while (value[i] >= '0' && value[i] <= '9') ++i;
    if (prev_i == i)
        return (false);
    while (i < value.length() && value[i] == ' ') ++i;
    return (i == value.length());
}

bool isFloat(std::string value) {
    size_t i = 0;
    size_t prev_i;
    while (i < value.length() && value[i] == ' ') ++i;
    if (value[i] == '-' || value[i] == '+') ++i;
    prev_i = i;
    while (value[i] >= '0' && value[i] <= '9') ++i;
    if (prev_i == i)
        return (false);
    if (value[i++] != '.')
        return (false);
    prev_i = i;
    while (value[i] >= '0' && value[i] <= '9') ++i;
    if (prev_i == i)
        return (false);
    if (value[i++] != 'f')
        return (false);
    while (i < value.length() && value[i] == ' ') ++i;
    return (i == value.length());
}

bool isDouble(std::string value) {
    size_t i = 0;
    size_t prev_i;
    while (i < value.length() && value[i] == ' ') ++i;
    if (value[i] == '-' || value[i] == '+') ++i;
    prev_i = i;
    while (value[i] >= '0' && value[i] <= '9') ++i;
    if (prev_i == i)
        return (false);
    if (value[i++] != '.')
        return (false);
    prev_i = i;
    while (value[i] >= '0' && value[i] <= '9') ++i;
    if (prev_i == i)
        return (false);
    while (i < value.length() && value[i] == ' ') ++i;
    return (i == value.length());
}

int main(int ac, char **av) {
	if (ac < 2)
		return (1);
	std::string arg = av[1];

    if (isChar(arg)) {
        std::cout << "CHAR" << std::endl;
    } else if (isInt(arg)) {
        std::cout << "INT" << std::endl;
    } else if (isFloat(arg)) {
        std::cout << "FLOAT" << std::endl;
    } else if (isDouble(arg)) {
        std::cout << "DOUBLE" << std::endl;
    }
    return (0);
}
