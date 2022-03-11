/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 03:28:11 by ehakam            #+#    #+#             */
/*   Updated: 2022/03/10 03:28:12 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converters.hpp"

void handleChar(std::string value) {
    char c = value[0];
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void handleInt(std::string value) {
    int i = 0;
    try {
        i = std::stoi(value);
        std::cout.precision(value.length());
        // Char
        if (std::isprint(i)) {
            std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
        } else if (i > std::numeric_limits<char>::max() || i < std::numeric_limits<char>::min()) {
            std::cout << "char: " << "impossible" << std::endl;
        } else {
            std::cout << "char: " << "Non displayable" << std::endl;
        }

        // Int
        std::cout << "int: " << i << std::endl;

        // Float
        std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;

        // Double
        std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
    } catch (std::exception & e) {
        handleElse();
    }
}

void handleFloat(std::string value) {
    float f = 0.0f;
    try {
        f = std::stof(value);
        std::cout.precision(value.length() - 2);

        // Char
        if (std::isprint(static_cast<int>(f))) {
            std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
        } else if (f > std::numeric_limits<char>::max() || f < std::numeric_limits<char>::min()) {
            std::cout << "char: " << "impossible" << std::endl;
        } else {
            std::cout << "char: " << "Non displayable" << std::endl;
        }

        // Int
        if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min()) {
            std::cout << "int: " << "impossible" << std::endl;
        } else {
            std::cout << "int: " << static_cast<int>(f) << std::endl;
        }
        // Float
        std::cout << "float: " << f << ((f - static_cast<int>(f) == 0) ? ".0" : "") << "f" << std::endl;
        // Double
        std::cout << "double: " << static_cast<double>(f) << ((f - static_cast<int>(f) == 0) ? ".0" : "") << std::endl;
    } catch (std::exception & e) {
        handleElse();
    }
}

void handleDouble(std::string value) {
    double d = 0.0f;
    try {
        d = std::stod(value);
        std::cout.precision(value.length() - 1);

        // Char
        if (std::isprint(static_cast<int>(d))) {
            std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
        } else if (d > std::numeric_limits<char>::max() || d < std::numeric_limits<char>::min()) {
            std::cout << "char: " << "impossible" << std::endl;
        } else {
            std::cout << "char: " << "Non displayable" << std::endl;
        }

        // Int
        if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min()) {
            std::cout << "int: " << "impossible" << std::endl;
        } else {
            std::cout << "int: " << static_cast<int>(d) << std::endl;
        }

        // Float
        if (d > std::numeric_limits<float>::max()) {
            std::cout << "float: " << "impossible" << std::endl;
        } else {
            std::cout << "float: " << d << ((d - static_cast<int>(d) == 0) ? ".0" : "") << "f" << std::endl;
        }

        // Double
        std::cout << "double: " << d << ((d - static_cast<int>(d) == 0) ? ".0" : "") << std::endl;
    } catch (std::exception & e) {
        handleElse();
    }
}

void handleNan( void ) {
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << "nanf" << std::endl;
    std::cout << "double: " << "nan" << std::endl;
}

void handlePosInf( void ) {
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << "+inff" << std::endl;
    std::cout << "double: " << "+inf" << std::endl;
}

void handleNegInf( void ) {
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << "-inff" << std::endl;
    std::cout << "double: " << "-inf" << std::endl;
}

void handleElse( void ) {
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << "impossible" << std::endl;
    std::cout << "double: " << "impossible" << std::endl;
}
