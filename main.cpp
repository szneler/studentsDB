#include "Student.hpp"
#include "StudentManager.hpp"


int main()
{
    StudentManager s;

    std::cout<<"\nAdding students:\n";

    s.addStudent(12345, "Adam", "Kowalski");
    s.addStudent(45678, "Marcin", "Adamski");
    s.addStudent(23123, "Robert", "Wolski");
    s.addStudent(11234, "Grzegorz", "Ziolko");
    s.addStudent(2121212, "Mateusz", "Zielinski");

    std::cout<<"\nStudents added. Printing list:\n";
    s.printStudents();

    s.sortStudentsByID();

    std::cout<<"\nStudents sorted. Printing list:\n";
    s.printStudents();

    s.eraseStudentByID(11234);
    
    std::cout<<"\nStudent with ID=11234 deleted. Printing list:\n";
    s.printStudents();

    return 0;
}
