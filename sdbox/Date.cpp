#include <iostream>
#include <ostream>

class Date {
    private:
        int month;
        int day;
        int year;
    public:
        Date ( int m, int d, int y) : month(m), day(d), year(y) {}
        int getDay ( void ) const;
        int getMonth ( void ) const;
        int getYear ( void ) const;
        friend std::ostream &operator<< (std::ostream &out, const Date &d);
};
std::ostream &operator<< (std::ostream &out, const Date &d)
{
    out << d.getDay() << "-"<< d.getMonth() << "-"<< d.getYear();
    return (out);
}

int    Date::getDay( void ) const{
    return (day);
}
int    Date::getMonth( void ) const{
    return (month);
}
int    Date::getYear( void ) const{
    return (year);
}



int main()
{

    Date newDate(12, 26, 2022);
    printf("address of newDate : %p\n", &newDate);
    std::cout << newDate << std::endl;
    return (0);
}