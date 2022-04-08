/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:06:02 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/08 22:10:51 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIAL_PARDOM_FORM_HPP__
# define __PRESIDENTIAL_PARDOM_FORM_HPP__

# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		std::string _target;
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & copy );
		PresidentialPardonForm& operator = ( PresidentialPardonForm const & copy );
		~PresidentialPardonForm( void );
		void			execute(Bureaucrat const & executor) const;
		virtual void	beSigned(Bureaucrat const & b);
};

#endif /* __PRESIDENTIAL_PARDOM_FORM_HPP__ */
