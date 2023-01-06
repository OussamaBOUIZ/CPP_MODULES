# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm ( string target, string name )
			: Form(name, 145, 137),
			  _target(target)
{
	std::cout << "---           ShrubberyCreationForm Default Constructor called" << std::endl;
	_signingState = false;
}

ShrubberyCreationForm::ShrubberyCreationForm ( void )
			: Form(),
			  _target("File")
{
	std::cout << "---           ShrubberyCreationForm Default Constructor called" << std::endl;
	_signingState = false;
}

ShrubberyCreationForm::~ShrubberyCreationForm ( void )
{
	std::cout << "---           ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm ( const ShrubberyCreationForm &obj )
			: Form(obj)
{
	*this = obj;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator= ( const ShrubberyCreationForm &obj )
{
	if (this == &obj)
		return (*this);
	*this = ShrubberyCreationForm(obj);
	return (*this);
}