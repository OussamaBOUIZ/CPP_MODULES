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
		class GradeToHighException;
		class GradeToLowException;
	private:
		const string _name;
		int	_grade;
};
#endif