#ifndef __BASE_H__
# define __BASE_H__

class Base {
	public:
		Base ( void );
		virtual ~Base ( void );
};

class Derived: public Base {
	public:
		Derived ( void );
		virtual ~Derived ( void );
};

#endif