/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:33:59 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/16 19:30:15 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <string>

class Bureaucrat;

class Form {
	private:
		std::string _name;
		int			_signGrade;
		int			_execGrade;
		bool		_isSigned;
	public:
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
		private:
			std::string _thower_name;
		public:
			GradeTooHighException( void );
			GradeTooHighException( std::string name );
			~GradeTooHighException( void ) _NOEXCEPT;
			const char* what() const throw ();
	};
	class GradeTooLowException : public std::exception {
		private:
			std::string _thower_name;
		public:
			GradeTooLowException( void );
			~GradeTooLowException( void ) _NOEXCEPT;
			GradeTooLowException( std::string name );
			const char* what() const throw ();
	};
};

std::ostream&	operator << (std::ostream &os, const Form &f);
std::ostream&	operator << (std::ostream &os, const Form::GradeTooLowException &e);
std::ostream&	operator << (std::ostream &os, const Form::GradeTooHighException &e);

#endif /* __FORM_HPP__ */
