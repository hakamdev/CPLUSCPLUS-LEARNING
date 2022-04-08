/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:25:50 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/08 22:25:56 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <string>

class Bureaucrat {
	private:
		std::string	const	_name;
		int					_grade;
	public:
		Bureaucrat( void );
		Bureaucrat( std::string const name, int grade );
		Bureaucrat( Bureaucrat const & copy );
		Bureaucrat& operator = ( Bureaucrat const & copy );
		~Bureaucrat( void );
		std::string	getName() const;
		int			getGrade() const;
		void		increment( void );
		void		decrement( void );
	class GradeTooHighException : public std::exception {
		public:
			~GradeTooHighException( void ) throw ();
			const char* what() const throw ();
	};
	class GradeTooLowException : public std::exception {
		public:
			~GradeTooLowException( void ) throw ();
			const char* what() const throw ();
	};
};

std::ostream&	operator << (std::ostream &os, const Bureaucrat &b);

#endif /* __BUREAUCRAT_HPP__ */
