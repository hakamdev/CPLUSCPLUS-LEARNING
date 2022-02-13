/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:15:53 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/13 23:01:19 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

# include <string>
#include <iostream>

class Brain {
	private:
		std::string ideas[100];

	public:
		Brain( void );
		Brain( Brain const & copy );
		Brain&	operator = ( Brain const & copy );
		~Brain( void );
};

#endif /* __BRAIN_HPP__ */