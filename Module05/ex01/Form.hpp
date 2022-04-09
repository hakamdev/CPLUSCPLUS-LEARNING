/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:33:59 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/08 23:53:14 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <string>

class Bureaucrat;

class Form {
	private:
		std::string const	_name;
		int const			_signGrade;
		int const			_execGrade;
		bool				_isSigned;
	public:
		Form( void );
		Form( std::string name, int signGrade, int execGrade );
		Form( Form const & copy );
		Form& operator = ( Form const & copy );
		~Form( void );

		std::string	getName( void ) const;
		int			getSignGrade( void ) const;
		int			getExecGrade( void ) const;
		bool		isSigned( void ) const;
		void		beSigned(Bureaucrat const & b);

	class GradeTooHighException : public std::exception {
		public:
			~GradeTooHighException( void ) throw();
			const char* what() const throw ();
	};
	class GradeTooLowException : public std::exception {
		public:
			~GradeTooLowException( void ) throw();
			const char* what() const throw ();
	};
};

std::ostream&	operator << (std::ostream &os, const Form &f);

#endif /* __FORM_HPP__ */
