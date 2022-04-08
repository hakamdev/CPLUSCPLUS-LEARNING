/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:05:16 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/08 22:11:28 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERY_CREATION_FORM_HPP__
# define __SHRUBBERY_CREATION_FORM_HPP__

# include <string>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form {
	private:
		std::string _target;
	public:
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & copy );
		ShrubberyCreationForm& operator = ( ShrubberyCreationForm const & copy );
		~ShrubberyCreationForm( void );
		void			execute(Bureaucrat const & executor) const;
		virtual void	beSigned(Bureaucrat const & b);
};

#endif /* __SHRUBBERY_CREATION_FORM_HPP__ */
