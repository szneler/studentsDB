#include "StudentManager.hpp"

void StudentManager::addStudent(unsigned int newIndexNo, std::string newFirstName, std::string newLastName)
{
    Student newStudent(newIndexNo, newFirstName, newLastName);
    students.push_back(newStudent);
}

void StudentManager::eraseStudentByID(unsigned int studentToErase)
{
    for (auto it = students.begin(); it != students.end(); )
    {
        if (it->indexNo == studentToErase)
        {
            it = students.erase(it);
        }
        else
            ++it;
    }
}

void StudentManager::sortStudentsByID()
{
    std::sort(students.begin(), students.end(),
            [](const Student& x, const Student& y){
            return x.indexNo < y.indexNo;
            });
}

void StudentManager::printStudents()
{
    for(const auto& student : students)
    {
        std::cout<<"IndexNo: "<<student.indexNo<<" "<<student.firstName<<" "<<student.lastName<<'\n';
    }
}
