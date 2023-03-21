# include "RPN.hpp"

/* ----------------------------------------------------- */
/* ------------------ CANONICAL FORM ------------------- */
/* ----------------------------------------------------- */

RPN::RPN ( char	*argument )
{
	if (argument and *argument == 0)
		errorMessage();
	this->_argument = string(argument);
}

RPN::RPN ( void )
{
	
}

RPN::~RPN ( void )
{
	
}

RPN	&RPN::operator= ( const RPN &obj )
{
	if (this == &obj)
		return (*this);
	return (*this);
}

RPN::RPN ( const RPN &obj )
{
	*this = obj;
}

/* ----------------------------------------------------- */
/* ------------------ MEMBER FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

bool	RPN::_isOperator ( char c )
{
	if (c == '+' or c == '-' or c == '/' or c == '*')
		return (true);
	return (false);
}

bool	RPN::_isInvalidCharacter ( char c )
{
	if (this->_isOperator(c) == false and isdigit(c) == 0 and c != ' ')
		return (false);
	return (true);
}

void	RPN::_checkArgument ( void )
{
	for (size_t i = 0; i < this->_argument.size(); i++)
	{
		if (this->_isInvalidCharacter(this->_argument[i]) == false)
			errorMessage();
	}	
}

int	RPN::_calculator ( int a, int b, char oper )
{
	if (oper == '+')
		return (a + b);
	else if (oper == '-')
		return (a - b);
	else if (oper == '/')
		return (a / b);
	else if (oper == '*')
		return (a * b);
	return (0);
}
void	RPN::_performOperation ( char oper )
{
	int	firstOperand, secondOperand;

	if (this->_abacus.size() < 2)
		errorMessage();
	firstOperand = this->_abacus.top();
	this->_abacus.pop();
	secondOperand = this->_abacus.top();
	this->_abacus.pop();
	this->_abacus.push(this->_calculator(secondOperand, firstOperand, oper));
	
}

void	RPN::calculate ( void )
{
	this->_checkArgument();
	for (size_t i = 0; i < this->_argument.size(); i++)
	{
		if (isdigit(this->_argument[i]))
			this->_abacus.push(std::stoi(string(1, this->_argument[i])));
		else if (this->_isOperator(this->_argument[i]))
			this->_performOperation (this->_argument[i]);
	}
	std::cout << this->_abacus.top() << std::endl;
}

/* ----------------------------------------------------- */
/* ------------------ UTILS  FUNCTIONS ----------------- */
/* ----------------------------------------------------- */

void	errorMessage ( void )
{
	std::cerr << "Error" << std::endl;
	exit(EXIT_FAILURE);
}

/*
	./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
	./RPN "7 7 * 7 -"
	./RPN "(1 + 1)"
*/