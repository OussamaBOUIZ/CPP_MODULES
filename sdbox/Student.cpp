#include <iostream>

using namespace std;


/* CLASS INTERFACE  */
class Student
{
    public:
        Student(string name, int age, int grade);
        Student( void );
        ~Student( void );
        Student( const Student &);
        void    setMarks(int s1, int s2);
        void    introduceStudent( void );
        void    displayAddresses( void );
        string  name;
        int     age;
        int     *marks; // this is an Array; of size 2 holding the mark of two respective semesters.
        int     grade;        
};

/* CLASS IMPLEMENTATION OCCF*/
Student::Student(string name, int age, int grade) : name(name), age(age), grade(grade) {};
Student::Student( void )
{
    name = "UNKNOWN";
    age = 0;
    grade = 0;
    marks = nullptr;
}

Student::~Student( void )
{
    delete [] marks;
    cout << "Destroying ...." << endl;
}

Student::Student(const Student &copy)
{
    // to try after --> copy.setMarks(val1, val2);
    name = copy.name;
    age = copy.age;
    grade = copy.grade;
    // marks = new int[2];
    // marks[0] = copy.marks[0];
    // marks[1] = copy.marks[1];
    setMarks(copy.marks[0], copy.marks[1]);
}

void    Student::setMarks(int s1, int s2)
{
    marks = new int[2];
    marks[0] = s1;
    marks[1] = s2;
}

void    Student::introduceStudent( void )
{
    cout << "My name is " + name + " and I'm " << age << " yo."<< endl;
    cout << "My marks are as follows : " << marks[0] << " " << marks[1] << endl;
}

void    Student::displayAddresses( void )
{
    cout << "---- ADDRESSES OF THIS OBJECT ----" << endl;
    cout << &name << endl;
    cout << &age << endl;
    cout << &grade << endl;
}

void    foo(Student aStudent)
{
    (void)aStudent;
    cout << "Hello from foo" << endl;
}

Student createStudentAndReturnIt( void )
{
    Student randomStudent("random", 0, 0);
    return (randomStudent);
}

int main( void )
{
    Student Oussama("oussama", 22, 1);
    Oussama.setMarks(80, 90);
    Oussama.introduceStudent();

    Student Abde = Oussama;
    Abde.introduceStudent();
    Abde.displayAddresses();
    Oussama.displayAddresses();
    return (0);
}
