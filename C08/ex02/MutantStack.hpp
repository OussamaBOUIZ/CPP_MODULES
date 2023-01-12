#ifndef __MUTANTSTACK_H__
# define __MUTANTSTACK_H__
# include <stack>
# include <deque>

template <typename T> class MutantStack : public std::stack<T> {
	public:
		MutantStack ( void ) {}
		~MutantStack ( void ) {}
		MutantStack ( const MutantStack & ) { }
		MutantStack	&operator= ( const MutantStack & ) { }
		typedef typename std::stack<T>::container_type::iterator	iterator;
		iterator begin ( void ) { 
			return this->c.begin();
		}
		iterator end ( void ) { 
			return this->c.end();
		}
};

#endif
