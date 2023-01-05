#ifndef __BUREAUCRAT_H__
# define __BUREAUCRAT_H__
# include <iostream>
# include "Form.hpp"
typedef std::string string;
typedef std::ostream ostream;

/* BUREAUCRAT INTERFACE */
class Bureaucrat {
	public:
		Bureaucrat ( int , string );
		Bureaucrat ( void );
		~Bureaucrat ( void );
		Bureaucrat ( const Bureaucrat & );
		Bureaucrat	&operator= ( const Bureaucrat & );
		const string getName ( void ) const;
		int	getGrade ( void ) const;
		void	incrementGrade( void );
		void	decrementGrade( void );
		void	signForm( Form & );
		class GradeTooHighException;
		class GradeTooLowException;
	private:
		const string _name;
		int	_grade;
};

ostream	&operator<< ( ostream &out, const Bureaucrat &obj);

#endif
