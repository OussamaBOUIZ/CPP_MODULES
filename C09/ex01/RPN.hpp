#ifndef __RPN_H__
# define __RPN_H__
# include <stack>
typedef std::string string;

class RPN {
	public:
		RPN ( void );
		~RPN ( void );
		RPN ( const RPN & );
		RPN	&operator= ( const RPN & );
	private:
		bool	_isOperator ( string & );
		std::stack<string>	_abacus;

		
};

#endif