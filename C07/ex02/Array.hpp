# include <exception>
class OutOfBounds: public std::exception {
	public:
		const char	*what() const throw() { return ("Out of Bounds index"); } 
};

template <typename T>
class Array {
	public:
		Array ( unsigned int n)
		{
			_size = n;
			_Array = new T[_size]();
		}
		Array ( void )
		{
			_size = 1;
			_Array = new T[_size]();
		}
		~Array ( void )
		{
			delete [] _Array;
		}
		Array	&operator= ( const Array &obj )
		{
			if (this == &obj)
				return (*this);
			this->_size = obj.size();
			this->_Array = new  T[this->size()]();
			for (unsigned int i = 0; i < this->size(); i++)
			{
				this->_Array[i] = obj._Array[i];
			}
			return (*this);
		}
		Array ( const Array &obj )
		{
			*this = obj;
		}
		unsigned int	size( void ) const {return (_size);}
		T	&operator[] ( unsigned int index )
		{
			if (index >= this->size())
				throw OutOfBounds();
			return *(this->_Array + index);
		}
	private:
		T 				*_Array;
		unsigned int	_size;
};


