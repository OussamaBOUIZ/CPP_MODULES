# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat ( int grade, string name ): _name(name)
{
	
}

Bureaucrat::Bureaucrat ( void )
{
	
}

Bureaucrat::~Bureaucrat ( void )
{
	
}

Bureaucrat	&Bureaucrat::operator= ( const Bureaucrat &obj )
{
	_grade = obj._grade;
	return (*this);
}

Bureaucrat::Bureaucrat ( const Bureaucrat &obj ) : _name ( obj._name)
{
	*this = obj;
}
