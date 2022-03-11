/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_checkers.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 03:29:07 by ehakam            #+#    #+#             */
/*   Updated: 2022/03/10 03:29:08 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __TYPE_CHECKERS_HPP__
# define __TYPE_CHECKERS_HPP__

# include <iostream>
# include <sstream>
# include <string>

bool isChar(std::string value);
bool isInt(std::string value);
bool isFloat(std::string value);
bool isDouble(std::string value);
bool isNan(std::string value);
bool isPosInf(std::string value);
bool isNegInf(std::string value);

#endif // __TYPE_CHECKERS_HPP__