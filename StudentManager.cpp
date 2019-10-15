#include "StudentManager.hpp"

void StudentManager::addStudent(unsigned int newIndexNo, std::string newFirstName, std::string newLastName)
{
    Student newStudent(newIndexNo, newFirstName, newLastName);
    students.push_back(newStudent);
}
