#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class Student
{
public:
    T ID;
    string name;

    Student(T ID, string name) : ID(ID), name(name) {}

    void display() const
    {
        cout << "Student ID: " << ID << endl;
        cout << "Student name: " << name << endl;
    }
};

template<typename T>
class StudentManager
{
private:
    vector<Student<T>> students;

public:
    void addStudent(T ID, string name)
    {
        students.push_back(Student<T>(ID, name));
        cout << "Student added successfully" << endl;
    }

    void displayAllStudent() const
    {
        if (students.empty())
        {
            cout << "No students available" << endl;
            return;
        }
        for (const auto& student : students)
        {
            student.display();
        }
    }

    void removeStudent(T ID)
    {
        // Manually remove student without using remove_if
        bool found = false;
        for (auto it = students.begin(); it != students.end(); ++it)
        {
            if (it->ID == ID)
            {
                students.erase(it); // Erase the student if ID matches
                found = true;
                cout << "Student with ID " << ID << " removed" << endl;
                break;
            }
        }

        if (!found)
        {
            cout << "Student with ID " << ID << " not found" << endl;
        }
    }

    void searchStudent(T ID) const
    {
        for (const auto& student : students)
        {
            if (student.ID == ID)
            {
                cout << "Student found" << endl;
                student.display();
                return;
            }
        }
        cout << "Student with ID " << ID << " not found" << endl;
    }
};

int main()
{
    StudentManager<int> sm;
    sm.addStudent(101, "Arth");
    sm.addStudent(102, "Harsh");
    sm.addStudent(103, "Vraj");

    cout << endl << "All Students" << endl;
    sm.displayAllStudent();

    cout << endl << "Searching for Student with ID 102" << endl;
    sm.searchStudent(102);

    cout << endl << "Removing Student with ID 102" << endl;
    sm.removeStudent(102);

    cout << endl << "All Students after removal" << endl;
    sm.displayAllStudent();

    return 0;
}
