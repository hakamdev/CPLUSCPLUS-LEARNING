/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 03:28:15 by ehakam            #+#    #+#             */
/*   Updated: 2022/03/10 03:28:16 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERTERS_HPP__
# define __CONVERTERS_HPP__

# include <iostream>
# include <sstream>
# include <string>

void handleChar(std::string value);
void handleInt(std::string value);
void handleFloat(std::string value);
void handleDouble(std::string value);
void handleNan( void );
void handlePosInf( void );
void handleNegInf( void );
void handleElse( void );

#endif // __CONVERTERS_HPP__