/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_checkers.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 03:29:04 by ehakam            #+#    #+#             */
/*   Updated: 2022/03/10 03:29:05 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type_checkers.hpp"

bool isChar(std::string value) {
    if (value.length() != 1) return (false);
    if (value[0] >= '0' && value[0] <= '9')
        return (false);
    return (true);
}

bool isInt(std::string value) {
    size_t i = 0;
    if (value.length() == 0) return (false);
    if (value[i] == '-' || value[i] == '+') {
        if (value.length() > 1) ++i;
        else return (false);
    }
    for (; i < value.length(); i++) {
        if (!(value[i] >= '0' && value[i] <= '9'))
            return (false);
    }
    return (true);
}

bool isFloat(std::string value) {
    size_t i = 0;

    if (value.length() == 0) return (false);
    if (value[i] == '-' || value[i] == '+') {
        if (value.length() > 1) ++i;
        else return (false);
    }
    if (!(value[i] >= '0' && value[i] <= '9')) return (false);
    while (value[i] >= '0' && value[i] <= '9') ++i;
    if (value[i++] != '.') return (false);
    if (!(value[i] >= '0' && value[i] <= '9')) return (false);
    while (value[i] >= '0' && value[i] <= '9') ++i;
    if (value[i++] != 'f') return (false);
    return (i == value.length());
}

bool isDouble(std::string value) {
    size_t i = 0;

    if (value.length() == 0) return (false);
    if (value[i] == '-' || value[i] == '+') {
        if (value.length() > 1) ++i;
        else return (false);
    }
    if (!(value[i] >= '0' && value[i] <= '9')) return (false);
    while (value[i] >= '0' && value[i] <= '9') ++i;
    if (value[i++] != '.') return (false);
    if (!(value[i] >= '0' && value[i] <= '9')) return (false);
    while (value[i] >= '0' && value[i] <= '9') ++i;
    return (i == value.length());
}

bool isNan(std::string value) {
    return (value.compare("nan") == 0 || value.compare("nanf") == 0);
}

bool isPosInf(std::string value) {
    return (value.compare("+inf") == 0 || value.compare("+inff") == 0);
}

bool isNegInf(std::string value) {
    return (value.compare("-inf") == 0 || value.compare("-inff") == 0);
}
