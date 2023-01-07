#ifndef __BUREAUCRAT_H__
# define __BUREAUCRAT_H__
# include <iostream>
# include <exception>
typedef std::string string;
typedef std::ostream ostream;
/* ----------------------------------------------------- */
/* ------------------    EXCEPTIONS    ----------------- */
/* ----------------------------------------------------- */

class GradeTooHighException: public std::exception {
	public:
		const char	*what() const throw();
};

class GradeTooLowException: public std::exception {
	public:
		const char	*what() const throw();
};
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
		GradeTooHighException HighGrade;
		GradeTooLowException  LowGrade;
	private:
		const string _name;
		int	_grade;
};

ostream	&operator<< ( ostream &out, const Bureaucrat &obj);

#endif
