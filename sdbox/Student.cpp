#include <iostream>

using namespace std;


/* CLASS INTERFACE  */
class Student
{
    public:
        Student(string name, int age, int grade);
        Student( void );
        ~Student( void );
        // Student( const Student &);
        void    setMarks(int s1, int s2);
        void    introduceStudent( void );
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
Student::~Student( void ) {return ;}

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

    // Student Abde = Oussama; // When compiling with this line uncommented we get a compilation error saying [Undefined Reference to Student::Student(Student const &)]
    /*we can understand from this compilation error that the copy constructor was called, let's see if the same thing happens when calling foo( Student )*/
    // foo(Oussama); // Yes the same thing happens as we didn't define our copy constructor yet, we get the same compilation error message
    /*we have now a function that creates inside its scope a class of type Student and return it we'll see if this also causes a problem*/
    // createStudentAndReturnIt();
    /*Just the call of createStudentAndReturnIt() yields the same error, the return instruction is the responsible of this error */
    /*Now let's comment this copy constructor from our class and see what happens*/
    Student Abde = Oussama;
    return (0);
}
