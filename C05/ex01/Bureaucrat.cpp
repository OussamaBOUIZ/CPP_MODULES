# include "Bureaucrat.hpp"

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

Bureaucrat::Bureaucrat ( int grade, string name ): _name(name)
{
	std::cout << "---           Bureaucrat Constructor called" << std::endl;
	if (grade < 1)
		throw HighGrade;
	else if (grade > 150)
		throw LowGrade;
	_grade = grade;
}

Bureaucrat::Bureaucrat ( void ) : _name("UNNAMED"), _grade(150) {
	std::cout << "---           Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat ( void ) {
	std::cout << "---           Bureaucrat Destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator= ( const Bureaucrat &obj )
{
	if (this == &obj)
		return (*this);
	_grade = obj._grade;
	return (*this);
}

Bureaucrat::Bureaucrat ( const Bureaucrat &obj ) : _name ( obj._name)
{
	*this = obj;
}

/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

const string	Bureaucrat::getName ( void ) const { return (_name) ; }
int				Bureaucrat::getGrade ( void ) const { return (_grade) ; }

void			Bureaucrat::incrementGrade ( void )
{
	_grade--;
	if (_grade < 1) 
		throw HighGrade;
	std::cout << "Incrementing " << _name << " grade to " << _grade << std::endl;
}

void			Bureaucrat::decrementGrade ( void )
{
	_grade++;
	if (_grade > 150) 
		throw LowGrade;
	std::cout << "Decrementing " << _name << " grade to " << _grade << std::endl;
}

void		Bureaucrat::signForm( Form &aForm )
{
	if (aForm.getSigningState() == true)
		std::cout << _name << " signed " << aForm.getName() << std::endl;
	else
		std::cout << _name << " couldn't sign " << aForm.getName() << " because of a reason." << std::endl;
}



/* ----------------------------------------------------- */
/* ------------------     OPERATOR     ----------------- */
/* ----------------------------------------------------- */

ostream	&operator<< ( ostream &out, const Bureaucrat &obj)
{
	std::cout << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}
