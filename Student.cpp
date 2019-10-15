#include "Student.hpp"

Student::Student()
    : indexNo(0), firstName(""), lastName(""){}

Student::Student(unsigned int newIndexNo, std::string newFirstName, std::string newLastName)
    : indexNo(newIndexNo), firstName(newFirstName), lastName(newLastName){}

Student::~Student(){};
