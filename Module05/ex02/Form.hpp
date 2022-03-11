/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:33:59 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/21 02:11:24 by ehakam           ###   ########.fr       */
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
		Form( std::string name, int signGrade, int execGrade );
		Form( Form const & copy );
		Form& operator = ( Form const & copy );
		virtual ~Form( void );

		std::string	getName( void ) const;
		int			getSignGrade( void ) const;
		int			getExecGrade( void ) const;
		bool		isSigned( void ) const;
		virtual void	execute(Bureaucrat const & executor) const;
		virtual void	beSigned(Bureaucrat const & b) = 0;

	class GradeTooHighException : public std::exception {
		private:
			std::string _thower_name;
		public:
			GradeTooHighException( void );
			GradeTooHighException( std::string name );
			~GradeTooHighException( void ) throw();
			const char* what() const throw ();
	};
	class GradeTooLowException : public std::exception {
		private:
			std::string _thower_name;
		public:
			GradeTooLowException( void );
			~GradeTooLowException( void ) throw();
			GradeTooLowException( std::string name );
			const char* what() const throw ();
	};
	class FormNotSignedException : public std::exception {
		private:
			std::string _thower_name;
		public:
			FormNotSignedException( void );
			~FormNotSignedException( void ) throw();
			FormNotSignedException( std::string name );
			const char* what() const throw ();
	};
};

std::ostream&	operator << (std::ostream &os, const Form &f);
std::ostream&	operator << (std::ostream &os, const Form::GradeTooLowException &e);
std::ostream&	operator << (std::ostream &os, const Form::GradeTooHighException &e);
std::ostream&	operator << (std::ostream &os, const Form::FormNotSignedException &e);

#endif /* __FORM_HPP__ */
