#ifndef __BUREAUCRAT_H__
# define __BUREAUCRAT_H__
# include <iostream>
typedef std::string string;

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
		class GradeTooHighException;
		class GradeTooLowException;
	private:
		const string _name;
		int	_grade;
};
#endif