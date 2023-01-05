# include "Bureaucrat.hpp"
class Bureaucrat::GradeTooHighException: public std::exception {
		string	_message;
	public:
		GradeTooHighException( string mess ) : _message (mess) {}
		const char	*what() const throw() { return (_message.c_str());}
};

class Bureaucrat::GradeTooLowException: public std::exception {
		string	_message;
	public:
		GradeTooLowException( string mess ) : _message (mess) {}
		const char	*what() const throw() { return (_message.c_str()); }
		
}; 

Bureaucrat::Bureaucrat ( int grade, string name ): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException("That's a Too High Exception !!!");
	else if (grade > 150)
		throw GradeTooLowException("That's a Too Low Exception !!!");
	_grade = grade;
}

Bureaucrat::Bureaucrat ( void ) : _name("UNNAMED"), _grade(150) {}

Bureaucrat::~Bureaucrat ( void ) {}

Bureaucrat	&Bureaucrat::operator= ( const Bureaucrat &obj )
{
	_grade = obj._grade;
	return (*this);
}

Bureaucrat::Bureaucrat ( const Bureaucrat &obj ) : _name ( obj._name)
{
	*this = obj;
}

const string	Bureaucrat::getName ( void ) const { return (_name) ; }
int				Bureaucrat::getGrade ( void ) const { return (_grade) ; }
