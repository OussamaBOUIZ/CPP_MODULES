#ifndef __RPN_H__
# define __RPN_H__
# include <stack>
# include <iostream>
typedef std::string string;

class RPN {
	public:
		RPN ( char	* );
		RPN ( void );
		~RPN ( void );
		RPN ( const RPN & );
		RPN	&operator= ( const RPN & );
		void	calculate ( void );
	private:
		void				_checkArgument ( void );
		void				_performOperation ( char );
		bool				_isOperator ( char );
		bool				_isInvalidCharacter ( char );
		int					_calculator (int, int, char);
		std::stack<int>		_abacus;
		string				_argument;
};

void	errorMessage ( void );

#endif