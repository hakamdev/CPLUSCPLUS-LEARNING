/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:06:10 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/08 22:11:19 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMY_REQUEST_FORM_HPP__
# define __ROBOTOMY_REQUEST_FORM_HPP__

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <string>

class RobotomyRequestForm : public Form {	
	private:
		std::string _target;
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & copy );
		RobotomyRequestForm& operator = ( RobotomyRequestForm const & copy );
		~RobotomyRequestForm( void );
		void			execute(Bureaucrat const & executor) const;
		virtual void	beSigned(Bureaucrat const & b);
};

#endif /* __ROBOTOMY_REQUEST_FORM_HPP__ */
