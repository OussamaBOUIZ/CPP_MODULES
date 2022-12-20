/*
    THIS IS AN EXAMPLE TO SHOW HOW WORK THE CALL TO THE COPY CONSTRUCTOR IN CASE
    OF HAVING OUR CLASS AS RETURN VALUE FROM ANOTHER FUNCTION
*/
#include <iostream>

using namespace std;


class Point {
    int x, y;
    public:
        Point( int x, int y );
        Point( const Point & );
        ~Point( void );
        Point   symetric( void );
};

Point::Point( int a=0, int b=0 ) 
{
    x = a;
    y = b;
    cout << "Constructing ... " << this<< " " << x << " " << y << endl;
};
Point::Point( const Point &copy)
{
    x = copy.x;
    y = copy.y;
    cout << "Constructing a COPY... " << this << " "<< x << " " << y << endl;
}

Point::~Point( void )
{
    cout << "Destroying ... " << this << " "<< x << " " << y << endl;
}

Point   Point::symetric( void )
{
    Point   Sym;

    Sym.x = -x;
    Sym.y = -y;
    return (Sym);
}


int main( void )
{
    Point a(1, 3), b;

    cout << "Before calling Symetric " << endl;
    b = a.symetric();
    cout << "After caliing Symetric" << endl;
    return (0);
}