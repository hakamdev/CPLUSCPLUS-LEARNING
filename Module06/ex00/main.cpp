/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 02:35:36 by ehakam            #+#    #+#             */
/*   Updated: 2022/03/10 03:28:39 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include "converters.hpp"
#include "type_checkers.hpp"

//  String helper function:
//  - removes white spaces around arguments
std::string trim(std::string value) {
    if (value.length() == 0) return value;
    size_t start_pos = 0;
    size_t end_pos = value.length() - 1;
    while (start_pos < value.length() - 1 && value[start_pos] == ' ')
        ++start_pos;
    while (end_pos > 0 && value[end_pos] == ' ')
        --end_pos;
    if (end_pos < start_pos) return std::string("");
    return value.substr(start_pos, end_pos - start_pos + 1);
}

int main(int ac, char **av) {
	if (ac != 2) {
        std::cerr << "Invalid Arguments!" << std::endl;
		return (1);
    }
	std::string arg = trim(av[1]);

    if (isChar(arg)) {
        handleChar(arg);
    } else if (isInt(arg)) {
        handleInt(arg);
    } else if (isFloat(arg)) {
        handleFloat(arg);
    } else if (isDouble(arg)) {
        handleDouble(arg);
    } else if (isNan(arg)) {
        handleNan();
    } else if (isPosInf(arg)) {
        handlePosInf();
    } else if (isNegInf(arg)) {
        handleNegInf();
    } else {
        handleElse();
    }
    return (0);
}
