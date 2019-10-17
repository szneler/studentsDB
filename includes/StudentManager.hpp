#ifndef __STUDENTMANAGER_HPP_INCLUDED
#define __STUDENTMANAGER_HPP_INCLUDED

#include "Student.hpp"

#include<string>
#include<vector>
#include<algorithm>
#include<iostream>

class StudentManager
{
    private:
        std:: vector<Student> students;

    public:
        void addStudent(unsigned int, std::string, std::string);
        void sortStudentsByID();
        void eraseStudentByID(unsigned int);
        void printStudents();
};

#endif
