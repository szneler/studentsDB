#ifndef __STUDENT_HPP_INCLUDED
#define __STUDENT_HPP_INCLUDED

#include <string>

class Student
{
    public:

    Student();
    Student(unsigned int, std::string, std::string);
    ~Student();

    unsigned int indexNo;
    std::string firstName;
    std::string lastName;
};



#endif
