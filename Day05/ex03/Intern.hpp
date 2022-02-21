/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:37:48 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/21 01:16:27 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include "Form.hpp"
# include <string>

class Intern {
	private:
		Form	*makeShrubberyForm( std::string formTarget );
		Form	*makePresidentialForm( std::string formTarget );
		Form	*makeRobotomyForm( std::string formTarget );
	public:
		Intern( void );
		Intern( Intern const & copy );
		Intern& operator = ( Intern const & copy );
		~Intern( void );
		Form	*makeForm(std::string formName, std::string formTarget);
};

#endif /* __INTERN_HPP__ */