/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:25:50 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/15 20:19:33 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <string>

class Bureaucrat {
	private:
		std::string	_name;
		int			_grade;
	public:
		Bureaucrat( std::string const name, int grade );
		Bureaucrat( Bureaucrat const & copy );
		Bureaucrat& operator = ( Bureaucrat const & copy );
		~Bureaucrat( void );
		std::string	getName() const;
		int			getGrade() const;
		void		increment( void );
		void		decrement( void );
	class GradeTooHighException : public std::exception {
		private:
			std::string _thower_name;
		public:
			GradeTooHighException( void );
			GradeTooHighException( std::string name );
			virtual ~GradeTooHighException( void ) _NOEXCEPT;
			const char* what() const throw ();
	};
	class GradeTooLowException : public std::exception {
			private:
				std::string _thower_name;
			public:
				GradeTooLowException( void );
				virtual ~GradeTooLowException( void ) _NOEXCEPT;
				GradeTooLowException( std::string name );
				const char* what() const throw ();
		};
};

std::ostream&	operator << (std::ostream &os, const Bureaucrat::GradeTooLowException &e);
std::ostream&	operator << (std::ostream &os, const Bureaucrat::GradeTooHighException &e);

#endif /* __BUREAUCRAT_HPP__ */