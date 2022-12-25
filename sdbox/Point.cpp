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
        void    locate ( void );
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

void    Point::locate ( void )
{
    cout << "X : " << x << endl;
    cout << "Y : " << y << endl;
}

class   PointCol : public Point {
    private:
        int color;
    public:
        PointCol ( int a, int b) : {} public : Point ( int a, int b);
        void     setColor ( int color );
};

int main( void )
{
    Point a(1, 3), b;


    PointCol    z(14, 22);

    z.setColor(200);
    z.locate();
    
    return (0);
}