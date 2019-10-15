#ifndef __STUDENT_HPP_INCLUDED
#define __STUDENT_HPP_INCLUDED

#include <string>

class Student
{
    public:

    std::string firstName;
    std::string lastName;
    unsigned int indexNo;
    
    Student();
    Student(unsigned int, std::string, std::string);
    ~Student();
};



#endif
